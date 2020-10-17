// example_rigid1.cc -*- C++ -*-
// simple rigid tracking program

/***
Copyright (c) PhaseSpace, Inc 2017

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL PHASESPACE, INC
BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
***/

/* Link with library file wsock32.lib */
//#include "stdafx.h"

//!!!!!!!!!NETWORK CODE!!!!!!!!!!!!!!!
#pragma comment (lib, "wsock32.lib")
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock.h> //causing compiler errors
#include <Windows.h>
#include <time.h>
#define BUFFER_SIZE 4096
//!!!!!!!!!NETWORK CODE!!!!!!!!!!!!!!!/

#include <iostream>
#include <vector>
#include <cstring>

#include "owl.hpp"

//#include <ctime>
#include <chrono>

using namespace std;

typedef std::chrono::high_resolution_clock Clock;

int main(int argc, const char** argv)
{

    WSADATA w;							/* Used to open windows connection */
    unsigned short port_number = 2000;	/* Port number to use */
    int a1, a2, a3, a4;					/* Components of address in xxx.xxx.xxx.xxx form */
    int b1, b2, b3, b4;					/* Components of address in xxx.xxx.xxx.xxx form */
    int client_length;					/* Length of client struct */
    int bytes_received = -1;				/* Bytes received from client */
    SOCKET sd;							/* Socket descriptor of server */
    struct sockaddr_in server;			/* Information about the server */
    struct sockaddr_in client;			/* Information about the client */
    char platformID[BUFFER_SIZE];			/* Where to store received data */
    struct hostent* hp;					/* Information about this computer */
    char host_name[256];				    /* Name of the server */
    double dataPacket[13] = { 0 };		/* Create array for data storage */
    clock_t start;
    double duration;

    /* Below is the IP address for the groundstation computer. In this version,
    it has been set to my laptop. This will have to be changed for any new groundstation. */
    a1 = 192;
    a2 = 168;
    a3 = 0;
    a4 = 105;

    /* Below is the IP address for the UDP client. */
    b1 = 192;
    b2 = 168;
    b3 = 0;
    b4 = 100;

    client.sin_addr.S_un.S_un_b.s_b1 = (unsigned char)b1;
    client.sin_addr.S_un.S_un_b.s_b2 = (unsigned char)b2;
    client.sin_addr.S_un.S_un_b.s_b3 = (unsigned char)b3;
    client.sin_addr.S_un.S_un_b.s_b4 = (unsigned char)b4;

    /* Open windows connection */
    if (WSAStartup(0x0101, &w) != 0)
    {
        fprintf(stderr, "Could not open Windows connection.\n");
        ::exit(0);
    }

    /* Open a datagram socket */
    sd = socket(AF_INET, SOCK_DGRAM, 0);
    u_long mode = 1;
    ioctlsocket(sd, FIONBIO, &mode);

    if (sd == INVALID_SOCKET)
    {
        fprintf(stderr, "Could not create socket.\n");

        WSACleanup();
        ::exit(0);
    }

    /* Clear out server struct */
    memset((void*)&server, '\0', sizeof(struct sockaddr_in));

    /* Set family and port */
    server.sin_family = AF_INET;
    server.sin_port = htons(port_number);

    server.sin_addr.S_un.S_un_b.s_b1 = (unsigned char)a1;
    server.sin_addr.S_un.S_un_b.s_b2 = (unsigned char)a2;
    server.sin_addr.S_un.S_un_b.s_b3 = (unsigned char)a3;
    server.sin_addr.S_un.S_un_b.s_b4 = (unsigned char)a4;

    /* Print out server information */
    printf("Server running on %u.%u.%u.%u\n", (unsigned char)server.sin_addr.S_un.S_un_b.s_b1,
        (unsigned char)server.sin_addr.S_un.S_un_b.s_b2,
        (unsigned char)server.sin_addr.S_un.S_un_b.s_b3,
        (unsigned char)server.sin_addr.S_un.S_un_b.s_b4);
    printf("Press CTRL + C to quit\n");

    /* Bind address to socket */
    if (bind(sd, (struct sockaddr*) & server, sizeof(struct sockaddr_in)) == -1)
    {
        fprintf(stderr, "Could not bind name to socket.\n");

        closesocket(sd);
        WSACleanup();
        ::exit(0);

    }

    /* Enter a while loop prior to starting the PhaseSpace stream so that no data is stored in the buffer while a connection is established. */
    fprintf(stderr, "Waiting on handshake...\n");
    while (bytes_received < 0)
    {
        client_length = (int)sizeof(struct sockaddr_in);

        /* Receive bytes from client */
        bytes_received = recvfrom(sd, platformID, BUFFER_SIZE, 0, (struct sockaddr*) & client, &client_length);
        if (bytes_received < 0)
        {
            //cout << "Connection cannot be established." << endl;
            //system("pause");
            //closesocket(sd);
            //WSACleanup();
            //::exit(0);
        }

    }
    cout << "Connection made!" << endl;

    /* This is where the PhaseSpace code begins. */
    string address = "192.168.0.109";
    OWL::Context owl;
    OWL::Markers markers;
    OWL::Rigids rigids;

    if (owl.open(address) <= 0 || owl.initialize() <= 0) return 0;

    std::string phaseSpaceOptions;
    std::string tracker_id_RED_7_pos_string, tracker_id_RED_1_pos_string;
    std::string tracker_id_RED_3_pos_string, tracker_id_RED_5_pos_string;
    std::string tracker_id_BLACK_15_pos_string, tracker_id_BLACK_9_pos_string;
    std::string tracker_id_BLACK_11_pos_string, tracker_id_BLACK_13_pos_string;
    phaseSpaceOptions = "profile=all120";

    /* The ID's indicate the location of each LED relative to the center of
    mass for the platform. These values dont really change all that much
    unless someone adds a huge mass at a distance. Even the robot arm
    barely changed the values. */
    /*tracker_id_RED_7_pos_string		= "pos=150.906958,123.344136,0";
    tracker_id_RED_1_pos_string		= "pos=150.906958,-154.655864,0";
    tracker_id_RED_3_pos_string		= "pos=-128.593042,-155.155864,0";
    tracker_id_RED_5_pos_string		= "pos=-127.593042,123.344136,0";
    tracker_id_BLACK_15_pos_string	= "pos=122.62,152.11,0";
    tracker_id_BLACK_9_pos_string		= "pos=121.82,-118.12,0";
    tracker_id_BLACK_11_pos_string	= "pos=-147.06,-117.56,0";
    tracker_id_BLACK_13_pos_string	= "pos=-147.03,152.18,0";*/

    // Tracker locations updated on 2018-07-04, based on CG estimated from weight with full tanks.

    tracker_id_RED_7_pos_string = "pos=146.960175,124.9189470,0";
    tracker_id_RED_1_pos_string = "pos=144.960175,-154.081053,0";
    tracker_id_RED_3_pos_string = "pos=-133.039825,-153.581053,0";
    tracker_id_RED_5_pos_string = "pos=-131.539825,124.418947,0";
    tracker_id_BLACK_15_pos_string = "pos=125.944730,153.415965,0";
    tracker_id_BLACK_9_pos_string = "pos=124.944730,-125.084035,0";
    tracker_id_BLACK_11_pos_string = "pos=-153.555270,-124.584035,0";
    tracker_id_BLACK_13_pos_string = "pos=-151.805270,154.415965,0";

    const std::string myoptions = phaseSpaceOptions;

    uint32_t tracker_id_RED = 0;
    owl.createTracker(tracker_id_RED, "rigid", "RED_rigid");

    /* Assign markers to the rigid body and indicate their positions
    w.r.t the centre of mass (obtained from calibration text file) */
    owl.assignMarker(tracker_id_RED, 7, "7", tracker_id_RED_7_pos_string); // top left
    owl.assignMarker(tracker_id_RED, 1, "1", tracker_id_RED_1_pos_string); // top right
    owl.assignMarker(tracker_id_RED, 3, "3", tracker_id_RED_3_pos_string); // bottom right
    owl.assignMarker(tracker_id_RED, 5, "5", tracker_id_RED_5_pos_string); // bottom left 

    uint32_t tracker_id_RED_arm = 1;
    owl.createTracker(tracker_id_RED_arm, "rigid", "RED_arm_flexible");

    owl.assignMarker(tracker_id_RED_arm, 2, "2", "pos=0,0,0"); // elbow 
    owl.assignMarker(tracker_id_RED_arm, 6, "6", "pos=0,0,0"); // wrist
    owl.assignMarker(tracker_id_RED_arm, 0, "0", "pos=0,0,0"); // end-effector

    uint32_t tracker_id_BLACK = 2;
    owl.createTracker(tracker_id_BLACK, "rigid", "BLACK_rigid");

    /* Assign markers to the rigid body and indicate their positions
    w.r.t the centre of mass (obtained from calibration text file) */
    owl.assignMarker(tracker_id_BLACK, 15, "15", tracker_id_BLACK_15_pos_string); // top left
    owl.assignMarker(tracker_id_BLACK, 9, "9", tracker_id_BLACK_9_pos_string); // top right
    owl.assignMarker(tracker_id_BLACK, 11, "11", tracker_id_BLACK_11_pos_string); // bottom right
    owl.assignMarker(tracker_id_BLACK, 13, "13", tracker_id_BLACK_13_pos_string); // bottom left

    owl.frequency(10);

    // start streaming
    owl.streaming(1);
    //start = clock();
    auto t1 = Clock::now();

    // main loop
    while (owl.isOpen() && owl.property<int>("initialized"))
    {
        
        const OWL::Event* event = owl.nextEvent(1000);
        if (!event) continue;

        if (event->type_id() == OWL::Type::ERROR)
        {
            break;
        }
        else if (event->type_id() == OWL::Type::FRAME)
        {
            if (event->find("rigids", rigids) > 0)
            {
                for (OWL::Rigids::iterator r = rigids.begin(); r != rigids.end(); r++)
                {
                    if (r->cond > 0)
                    {
                        if (r->id == 0)
                        {

                            auto t2 = Clock::now();
                            duration = std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count();
                            dataPacket[0] = duration * 0.000000001;
                            dataPacket[1] = r->pose[0];
                            dataPacket[2] = r->pose[1];
                            dataPacket[3] = atan2(2 * r->pose[4] * r->pose[5]
                                + 2 * r->pose[3] * r->pose[6],
                                2 * r->pose[3] * r->pose[3] - 1
                                + 2 * r->pose[4] * r->pose[4]);
                        }
                        if (r->id == 2)
                        {
                            dataPacket[4] = r->pose[0];
                            dataPacket[5] = r->pose[1];
                            dataPacket[6] = atan2(2 * r->pose[4] * r->pose[5]
                                + 2 * r->pose[3] * r->pose[6],
                                2 * r->pose[3] * r->pose[3] - 1
                                + 2 * r->pose[4] * r->pose[4]);
                        }
                    }
                }
            }
            if (event->find("markers", markers) > 0)
            {
                for (OWL::Markers::iterator m = markers.begin(); m != markers.end(); m++)
                {
                    if (m->cond > 0)
                    {
                        if (m->id == 2)
                        {
                            dataPacket[7] = m->x;
                            dataPacket[8] = m->y;
                        }
                        if (m->id == 6)
                        {
                            dataPacket[9] = m->x;
                            dataPacket[10] = m->y;
                        }
                        if (m->id == 0)
                        {
                            dataPacket[11] = m->x;
                            dataPacket[12] = m->y;
                        }
                    }
                }
            }
            if (sendto(sd, (char*)&dataPacket, (int)sizeof(dataPacket), 0, (struct sockaddr*) & client, client_length) != (int)sizeof(dataPacket))
            {
                fprintf(stderr, "Error sending datagram.\n");
                closesocket(sd);
                WSACleanup();
                ::exit(0);
            }
        }
    } // while 

    owl.done();
    owl.close();
    return 0;
}

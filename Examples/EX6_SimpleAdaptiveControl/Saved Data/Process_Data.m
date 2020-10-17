clear;
clc;
fclose('all');

% Load relevatn data packets:
load('C:\SPOT 2.0 Software (v2.12)\Examples\EX6_SimpleAdaptiveControl\Saved Data\SimulationData_2018_7_23_23_26\dataPacket_SIM.mat','dataPacket');
load('C:\SPOT 2.0 Software (v2.12)\Examples\EX6_SimpleAdaptiveControl\Saved Data\ExperimentData_RED_2018_7_23_23_24\SimpleAdaptiveControl_1__stitched.mat','rt_dataPacket');
load('C:\SPOT 2.0 Software (v2.12)\Examples\EX6_SimpleAdaptiveControl\Saved Data\SimulationData_2018_7_23_23_26\dataPacket_SIM.mat','dataPacket');
load('C:\SPOT 2.0 Software (v2.12)\Examples\EX6_SimpleAdaptiveControl\Saved Data\ExperimentData_BLACK_2018_7_23_23_24\SimpleAdaptiveControl_1__stitched.mat','rt_dataPacket');

% Store data into variables:
TIME_RED_SIM        = dataPacket(121:3611,1);
PX_RED_SIM          = dataPacket(121:3611,5);
PY_RED_SIM          = dataPacket(121:3611,6);
RZ_RED_SIM          = unwrap(dataPacket(121:3611,7));

TIME_BLACK_SIM      = dataPacket(121:3611,1);
PX_BLACK_SIM        = dataPacket(121:3611,14);
PY_BLACK_SIM        = dataPacket(121:3611,15);
RZ_BLACK_SIM        = unwrap(dataPacket(121:3611,16));

TIME_RED_EXP        = rt_dataPacket(251:3741,1);
PX_RED_EXP          = rt_dataPacket(251:3741,5);
PY_RED_EXP          = rt_dataPacket(251:3741,6);
RZ_RED_EXP          = unwrap(rt_dataPacket(251:3741,7));

TIME_BLACK_EXP      = rt_dataPacket(251:3741,1);
PX_BLACK_EXP        = rt_dataPacket(251:3741,14);
PY_BLACK_EXP        = rt_dataPacket(251:3741,15);
RZ_BLACK_EXP        = unwrap(rt_dataPacket(251:3741,16));

ts1                 = timeseries([PX_RED_SIM,PY_RED_SIM,RZ_RED_SIM],TIME_RED_SIM);
ts2                 = timeseries([PX_RED_EXP,PY_RED_EXP,RZ_RED_EXP],TIME_RED_EXP);

[ts1_new, ts2_new]  = synchronize(ts1,ts2,'union');

TIME_RED_SIM        = ts1_new.Time;
TIME_RED_EXP        = ts2_new.Time;

PX_RED_SIM          = ts1_new.Data(:,1);
PY_RED_SIM          = ts1_new.Data(:,2);
RZ_RED_SIM          = ts1_new.Data(:,3);

PX_RED_EXP          = ts2_new.Data(:,1);
PY_RED_EXP          = ts2_new.Data(:,2);
RZ_RED_EXP          = ts2_new.Data(:,3);

ts1                 = timeseries([PX_BLACK_SIM,PY_BLACK_SIM,RZ_BLACK_SIM],TIME_BLACK_SIM);
ts2                 = timeseries([PX_BLACK_EXP,PY_BLACK_EXP,RZ_BLACK_EXP],TIME_BLACK_EXP);

[ts1_new, ts2_new]  = synchronize(ts1,ts2,'union');

TIME_BLACK_SIM        = ts1_new.Time;
TIME_BLACK_EXP        = ts2_new.Time;

PX_BLACK_SIM          = ts1_new.Data(:,1);
PY_BLACK_SIM          = ts1_new.Data(:,2);
RZ_BLACK_SIM          = ts1_new.Data(:,3);

PX_BLACK_EXP          = ts2_new.Data(:,1);
PY_BLACK_EXP          = ts2_new.Data(:,2);
RZ_BLACK_EXP          = ts2_new.Data(:,3);

% Plot data:
figure(1)
plot(TIME_RED_SIM,PX_RED_SIM,'-k');
hold on;
grid on;
axis tight;
plot(TIME_RED_EXP,PX_RED_EXP,'--r');
legend('Simulation','Experiment','location','best')
xlabel('Time (s)');
ylabel('X-Position - RED (m)');

figure(2)
plot(TIME_RED_SIM,PY_RED_SIM,'-k');
hold on;
grid on;
axis tight;
plot(TIME_RED_EXP,PY_RED_EXP,'--r');
legend('Simulation','Experiment','location','best')
xlabel('Time (s)');
ylabel('Y-Position - RED (m)');

figure(3)
plot(TIME_RED_SIM,RZ_RED_SIM,'-k');
hold on;
grid on;
axis tight;
plot(TIME_RED_EXP,RZ_RED_EXP,'--r');
legend('Simulation','Experiment','location','best')
xlabel('Time (s)');
ylabel('Attitude - RED (m)');

figure(4)
plot(TIME_BLACK_SIM,PX_BLACK_SIM,'-k');
hold on;
grid on;
axis tight;
plot(TIME_BLACK_EXP,PX_BLACK_EXP,'--r');
legend('Simulation','Experiment','location','best')
xlabel('Time (s)');
ylabel('X-Position - BLACK (m)');

figure(5)
plot(TIME_BLACK_SIM,PY_BLACK_SIM,'-k');
hold on;
grid on;
axis tight;
plot(TIME_BLACK_EXP,PY_BLACK_EXP,'--r');
legend('Simulation','Experiment','location','best')
xlabel('Time (s)');
ylabel('Y-Position - BLACK (m)');

figure(6)
plot(TIME_BLACK_SIM,RZ_BLACK_SIM,'-k');
hold on;
grid on;
axis tight;
plot(TIME_BLACK_EXP,RZ_BLACK_EXP,'--r');
legend('Simulation','Experiment','location','best')
xlabel('Time (s)');
ylabel('Attitude - BLACK (m)');

figure(7)
plot(PX_RED_SIM, PY_RED_SIM,'-k');
hold on;
grid on;
plot(PX_RED_EXP, PY_RED_EXP,'--r');
plot(PX_BLACK_SIM, PY_BLACK_SIM,'-m');
plot(PX_BLACK_EXP, PY_BLACK_EXP,'--b');
legend('Simulation - RED','Experiment - RED','Simulation - BLACK','Experiment - BLACK','location','best')
xlabel('X-Position (m)');
ylabel('Y-Position (m)');

figure(8)
plot(PX_RED_SIM(2000:6250)-PX_RED_EXP(2000:6250),'-k');
hold on
grid on
axis tight;
xlabel('Time (s)');
ylabel('X-Position Error (m)');
RMSEX = sqrt((sum((PX_RED_SIM(2000:6250)-PX_RED_EXP(2000:6250)).^2)/length(PX_RED_EXP(2000:6250))));

fprintf('\nThe RMSE for the x-position is %f m.\n',RMSEX);

figure(9)
plot(PY_RED_SIM(2000:6250)-PY_RED_EXP(2000:6250),'-k');
hold on
grid on
axis tight;
xlabel('Time (s)');
ylabel('Y-Position Error (m)');
RMSEY = sqrt((sum((PY_RED_SIM(2000:6250)-PY_RED_EXP(2000:6250)).^2)/length(PY_RED_EXP(2000:6250))));

fprintf('\nThe RMSE for the y-position is %f m.\n',RMSEY);

function varargout = GUI_v2_12(varargin)

% GUI_v2_12 MATLAB code for GUI_v2_12.fig
%      GUI_v2_12, by itself, creates a new GUI_v2_12 or raises the existing
%      singleton*.
%
%      H = GUI_v2_12 returns the handle to a new GUI_v2_12 or the handle to
%      the existing singleton*.
%
%      GUI_v2_12('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in GUI_v2_12.M with the given input arguments.
%
%      GUI_v2_12('Property','Value',...) creates a new GUI_v2_12 or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before GUI_v2_12_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to GUI_v2_12_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help GUI_v2_12

% Last Modified by GUIDE v2.5 30-Jun-2018 10:59:08

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @GUI_v2_12_OpeningFcn, ...
                   'gui_OutputFcn',  @GUI_v2_12_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end

% End initialization code - DO NOT EDIT


% --- Executes just before GUI_v2_12 is made visible.
function GUI_v2_12_OpeningFcn(hObject, ~, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to GUI_v2_12 (see VARARGIN)

% Choose default command line output for GUI_v2_12
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% Get the handles for the GUI figure and draw the table:
axes(handles.axes1);

xLength = evalin('base', 'xLength');
yLength = evalin('base', 'yLength');

% Create axes
h       = gca;

% Flip the axis to match the table:
axis(h,'ij');

% Set the remaining axes properties
set(h,'XAxisLocation','top');

% Set the limits on the figure:
xlim(h,[-0.65 3]);
ylim(h,[-0.5 4]);

% Plot the table:
line([0 yLength],[0 0],'Color','black','LineWidth',2);
hold on;
line([yLength yLength],[0 xLength],'Color','black','LineWidth',2);
line([yLength 0],[xLength xLength],'Color','black','LineWidth',2);
line([0 0],[xLength 0],'Color','black','LineWidth',2);
grid on;
xlabel('Y-Coordinate (m)');
ylabel('X-Coordinate (m)');

% Assign the default value to be 0; this only changes temporarily when the
% user clicks on the Run Simulation button.
assignin('base','simMode',0);

% UIWAIT makes GUI_v2_12 wait for user response (see UIRESUME)
% uiwait(handles.figure1);

% --- Outputs from this function are returned to the command line.
function varargout = GUI_v2_12_OutputFcn(~, ~, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;

% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(~, ~, ~) %#ok<*DEFNU>
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Connect to the RED platform and run the FloatPlatform executable:
RED = raspberrypi('192.168.0.100','pi','raspberry');
runModel(RED,'FloatPlatform');


% --- Executes on button press in pushbutton3.
function pushbutton3_Callback(hObject, eventdata, handles) %#ok<*INUSD>
% hObject    handle to pushbutton3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Connect to the RED platform and stop the FloatPlatform executable:
RED = raspberrypi('192.168.0.100','pi','raspberry');
stopModel(RED,'FloatPlatform');

% --- Executes on button press in pushbutton5.
function pushbutton5_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Connect to the BLACK platform and run the FloatPlatform executable:
BLA = raspberrypi('192.168.0.101','pi','raspberry');
runModel(BLA,'FloatPlatform');

% --- Executes on button press in pushbutton6.
function pushbutton6_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Connect to the BLACK platform and stop the FloatPlatform executable:
BLA = raspberrypi('192.168.0.101','pi','raspberry');
stopModel(BLA,'FloatPlatform');

% --- Executes on button press in pushbutton7.
function pushbutton7_Callback(hObject, eventdata, handles) %#ok<*INUSL>
% hObject    handle to pushbutton7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Grab the condition of the checkboxes under "select platforms":
R = get(handles.radiobutton5,'Value');
B = get(handles.radiobutton8,'Value');
D = get(handles.radiobutton9,'Value');
A = get(handles.radiobutton10,'Value');
    
if (R == 1 && A == 1 && B == 0 && D == 0) || (R == 1 && A == 1 && B == 1 && D == 0)
    
    selectedFile = get(handles.popupmenu2,'Value');
    filenames    = get(handles.popupmenu2,'String');

    set_param(filenames{selectedFile}(1:(end-4)),'SimulationMode','normal');

    assignin('base','simMode',1);
    
    simrun = dialog('Position',[300 300 250 150],'Name','Running Simulation...');

    uicontrol('Parent',simrun,...
               'Style','text',...
               'Position',[20 80 210 40],...
               'String','Wait for simulation to complete.');   
    options = simset('SrcWorkspace','base','DstWorkspace','base');
    sim(filenames{selectedFile}(1:(end-4)),[],options)
    fprintf('Done.\n');
    close(simrun);

    assignin('base','simMode',0);
    
    set(handles.pushbutton24,'enable','on');
    set(handles.togglebutton1,'enable','on');
    
else

    selectedFile = get(handles.popupmenu2,'Value');
    filenames    = get(handles.popupmenu2,'String');

    set_param(filenames{selectedFile}(1:(end-4)),'SimulationMode','normal');

    assignin('base','simMode',1);

    simrun = dialog('Position',[300 300 250 150],'Name','Running Simulation...');

    uicontrol('Parent',simrun,...
               'Style','text',...
               'Position',[20 80 210 40],...
               'String','Wait for simulation to complete.');   
    options = simset('SrcWorkspace','base','DstWorkspace','base');   
    sim(filenames{selectedFile}(1:(end-4)),[],options)
    fprintf('Done.\n');
    close(simrun);

    assignin('base','simMode',0);
    set(handles.pushbutton24,'enable','on');
    set(handles.togglebutton1,'enable','on');
    
end

% --- Executes on button press in pushbutton8.
function pushbutton8_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton8 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
selectedFile = get(handles.popupmenu2,'Value');
filenames    = get(handles.popupmenu2,'String');

raspberrypi('192.168.0.100','pi','raspberry');
slbuild(filenames{selectedFile}(1:(end-4)))

% --- Executes on button press in pushbutton10.
function pushbutton10_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton10 (see GCBO)');
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

filenames    = get(handles.popupmenu2,'String');
selectedFile = get(handles.popupmenu2,'Value');

R = get(handles.radiobutton5,'Value');
B = get(handles.radiobutton8,'Value');
D = get(handles.radiobutton9,'Value');
A = get(handles.radiobutton10,'Value');

if R == 0 && B == 0 && D == 0 && A == 0
    ed = errordlg('You have not chosen any platforms; see step #2.','Error');
    set(ed, 'WindowStyle', 'modal');
    uiwait(ed);
else
    system('StreamData.exe &');
    pause(1);
    platformSelection = evalin('base', 'platformSelection');
    if platformSelection == 1
        RED= raspberrypi('192.168.0.100','pi','raspberry');
        runModel(RED,filenames{selectedFile}(1:(end-4)));
    elseif platformSelection == 2
        BLA= raspberrypi('192.168.0.101','pi','raspberry');
        runModel(BLA,filenames{selectedFile}(1:(end-4)));
    elseif platformSelection == 3
        RED= raspberrypi('192.168.0.100','pi','raspberry');
        runModel(RED,filenames{selectedFile}(1:(end-4)));
        BLA= raspberrypi('192.168.0.101','pi','raspberry');
        runModel(BLA,filenames{selectedFile}(1:(end-4)));
    elseif platformSelection == 4
        RED= raspberrypi('192.168.0.100','pi','raspberry');
        runModel(RED,filenames{selectedFile}(1:(end-4)));
        BLA= raspberrypi('192.168.0.101','pi','raspberry');
        runModel(BLA,filenames{selectedFile}(1:(end-4)));
    elseif platformSelection == 5
        RED= raspberrypi('192.168.0.100','pi','raspberry');
        runModel(RED,filenames{selectedFile}(1:(end-4)));
    end

end

% --- Executes on button press in pushbutton9.
function pushbutton9_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton9 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
selectedFile = get(handles.popupmenu2,'Value');
filenames    = get(handles.popupmenu2,'String');

raspberrypi('192.168.0.101','pi','raspberry');
slbuild(filenames{selectedFile}(1:(end-4)))


% --- Executes on button press in togglebutton2.
function togglebutton2_Callback(hObject, eventdata, handles)
% hObject    handle to togglebutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% hObject    handle to pushbutton11 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

R = get(handles.radiobutton5,'Value');
B = get(handles.radiobutton8,'Value');
D = get(handles.radiobutton9,'Value');
A = get(handles.radiobutton10,'Value');

selectedFile = get(handles.popupmenu2,'Value');
filenames    = get(handles.popupmenu2,'String');

if R == 0 && B == 0 && D == 0 && A == 0
    ed = errordlg('You have not chosen any platforms; see step #2.','Error');
    set(ed, 'WindowStyle', 'modal');
    uiwait(ed);
else
    platformSelection = evalin('base', 'platformSelection');
    if platformSelection == 1
        RED= raspberrypi('192.168.0.100','pi','raspberry');
        stopModel(RED,filenames{selectedFile}(1:(end-4)));
    elseif platformSelection == 2
        BLA= raspberrypi('192.168.0.101','pi','raspberry');
        stopModel(BLA,filenames{selectedFile}(1:(end-4)));
    elseif platformSelection == 3
        RED= raspberrypi('192.168.0.100','pi','raspberry');
        stopModel(RED,filenames{selectedFile}(1:(end-4)));
        BLA= raspberrypi('192.168.0.101','pi','raspberry');
        stopModel(BLA,filenames{selectedFile}(1:(end-4)));
    elseif platformSelection == 4
        RED= raspberrypi('192.168.0.100','pi','raspberry');
        stopModel(RED,filenames{selectedFile}(1:(end-4)));
        BLA= raspberrypi('192.168.0.101','pi','raspberry');
        stopModel(BLA,filenames{selectedFile}(1:(end-4)));
    elseif platformSelection == 5
        RED= raspberrypi('192.168.0.100','pi','raspberry');
        stopModel(RED,filenames{selectedFile}(1:(end-4)));
    end
    !taskkill -f -im StreamData.exe
    
    set(hObject,'Value',0);
end


% Hint: get(hObject,'Value') returns toggle state of togglebutton2

% --- Executes on button press in radiobutton5.
function radiobutton5_Callback(hObject, eventdata, handles)
% hObject    handle to radiobutton5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% if get(hObject,'Value') == 1
%     assignin('base','platformSelection',1);
% end
    
% Hint: get(hObject,'Value') returns toggle state of radiobutton5

% --- Executes on button press in radiobutton8.
function radiobutton8_Callback(hObject, eventdata, handles)
% hObject    handle to radiobutton8 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% if get(hObject,'Value') == 1
%     assignin('base','platformSelection',2);
% end

% Hint: get(hObject,'Value') returns toggle state of radiobutton8

% --- Executes on button press in radiobutton9.
function radiobutton9_Callback(hObject, eventdata, handles)
% hObject    handle to radiobutton9 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% if get(hObject,'Value') == 1
%     assignin('base','platformSelection',3);
% end

% Hint: get(hObject,'Value') returns toggle state of radiobutton9

% --- Executes during object creation, after setting all properties.
function axes1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to axes1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called


% Hint: place code in OpeningFcn to populate axes1

% --- Executes on mouse press over axes background.
function axes1_ButtonDownFcn(hObject, eventdata, handles)
% hObject    handle to axes1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% --- Executes on button press in radiobutton10.
function radiobutton10_Callback(hObject, eventdata, handles)
% hObject    handle to radiobutton10 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of radiobutton10

% --- Executes on button press in pushbutton19.
function pushbutton19_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton19 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

R = get(handles.radiobutton5,'Value');
B = get(handles.radiobutton8,'Value');
D = get(handles.radiobutton9,'Value');
A = get(handles.radiobutton10,'Value');

if R == 1 && B == 0 && D == 0 && A == 0
    assignin('base','platformSelection',1);
elseif R == 0 && B == 1 && D == 0 && A == 0
    assignin('base','platformSelection',2);
elseif R == 1 && B == 1 && D == 0 && A == 0
    assignin('base','platformSelection',3);    
elseif R == 1 && B == 1 && D == 0 && A == 1
    assignin('base','platformSelection',4);
elseif R == 1 && B == 0 && D == 0 && A == 1
    assignin('base','platformSelection',5);
elseif R == 0 && B == 0 && D == 0 && A == 0
    ed = errordlg('You need to select at least one platform for experiments.','Error');
    set(ed, 'WindowStyle', 'modal');
    uiwait(ed);
else
    ed = errordlg('The combination of platforms selected has not been implemented yet.','Error');
    set(ed, 'WindowStyle', 'modal');
    uiwait(ed);
end

if R == 1 && B == 0 && D == 0 && A == 0
    
    axes(handles.axes1);
    
    cla;
    
    xLength = evalin('base', 'xLength');
    yLength = evalin('base', 'yLength');
    % Create axes

    h = gca;

    axis(h,'ij');
    % Set the remaining axes properties
    set(h,'XAxisLocation','top');
    xlim(h,[-0.65 3]);
    ylim(h,[-0.5 4]);

    % Plot the table
    line([0 yLength],[0 0],'Color','black','LineWidth',2);
    hold on;
    line([yLength yLength],[0 xLength],'Color','black','LineWidth',2);
    line([yLength 0],[xLength xLength],'Color','black','LineWidth',2);
    line([0 0],[xLength 0],'Color','black','LineWidth',2);

    % Plot the RED and BLACK drop coordinates
    drop_states_RED   = evalin('base', 'drop_states_RED');
    
    drop_states_RED(3)   = -drop_states_RED(3);
    
    DrawRectangle([drop_states_RED(2),drop_states_RED(1),0.3,0.3,drop_states_RED(3)],'-r');
    
    C_bI_RED = [  cos(drop_states_RED(3)) sin(drop_states_RED(3))
                 -sin(drop_states_RED(3)) cos(drop_states_RED(3)) ];

    Vec_RED  = C_bI_RED*[ 0.15
                          0.0 ];

    line([drop_states_RED(2),drop_states_RED(2)+Vec_RED(2)],[drop_states_RED(1),drop_states_RED(1)+Vec_RED(1)],'Color','red');
    
    grid on;
    xlabel('Y-Coordinate (m)');
    ylabel('X-Coordinate (m)');
    
elseif R == 0 && B == 1 && D == 0 && A == 0
    
    axes(handles.axes1);
    
    cla;
    
    xLength = evalin('base', 'xLength');
    yLength = evalin('base', 'yLength');
    % Create axes

    h = gca;

    axis(h,'ij');
    % Set the remaining axes properties
    set(h,'XAxisLocation','top');
    %DrawRectangle([yLength/2,xLength/2,yLength,xLength,0],'k')
    xlim(h,[-0.65 3]);
    ylim(h,[-0.5 4]);

    % Plot the table
    line([0 yLength],[0 0],'Color','black','LineWidth',2);
    hold on;
    line([yLength yLength],[0 xLength],'Color','black','LineWidth',2);
    line([yLength 0],[xLength xLength],'Color','black','LineWidth',2);
    line([0 0],[xLength 0],'Color','black','LineWidth',2);
    
    % Plot the RED and BLACK drop coordinates
    
    drop_states_BLACK = evalin('base', 'drop_states_BLACK');

    
    drop_states_BLACK(3) = -drop_states_BLACK(3);

    
    DrawRectangle([drop_states_BLACK(2),drop_states_BLACK(1),0.3,0.3,drop_states_BLACK(3)],'-k');


    C_bI_BLACK = [  cos(drop_states_BLACK(3)) sin(drop_states_BLACK(3))
                   -sin(drop_states_BLACK(3)) cos(drop_states_BLACK(3)) ];


    Vec_BLACK  = C_bI_BLACK*[ 0.15
                              0.0 ];    

    line([drop_states_BLACK(2),drop_states_BLACK(2)+Vec_BLACK(2)],[drop_states_BLACK(1),drop_states_BLACK(1)+Vec_BLACK(1)],'Color','black');


    grid on;
    xlabel('Y-Coordinate (m)');
    ylabel('X-Coordinate (m)');
    
elseif R == 1 && B == 1 && D == 0 && A == 0
    
    axes(handles.axes1);
    
    cla;

    xLength = evalin('base', 'xLength');
    yLength = evalin('base', 'yLength');
    % Create axes

    h = gca;

    axis(h,'ij');
    % Set the remaining axes properties
    set(h,'XAxisLocation','top');
    %DrawRectangle([yLength/2,xLength/2,yLength,xLength,0],'k')
    xlim(h,[-0.65 3]);
    ylim(h,[-0.5 4]);

    % Plot the table
    line([0 yLength],[0 0],'Color','black','LineWidth',2);
    hold on;
    line([yLength yLength],[0 xLength],'Color','black','LineWidth',2);
    line([yLength 0],[xLength xLength],'Color','black','LineWidth',2);
    line([0 0],[xLength 0],'Color','black','LineWidth',2);

    % Plot the RED and BLACK drop coordinates
    drop_states_RED   = evalin('base', 'drop_states_RED');
    drop_states_BLACK = evalin('base', 'drop_states_BLACK');

    drop_states_RED(3)   = -drop_states_RED(3);
    drop_states_BLACK(3) = -drop_states_BLACK(3);

    DrawRectangle([drop_states_RED(2),drop_states_RED(1),0.3,0.3,drop_states_RED(3)],'-r');
    DrawRectangle([drop_states_BLACK(2),drop_states_BLACK(1),0.3,0.3,drop_states_BLACK(3)],'-k');

    C_bI_RED = [  cos(drop_states_RED(3)) sin(drop_states_RED(3))
                 -sin(drop_states_RED(3)) cos(drop_states_RED(3)) ];

    Vec_RED  = C_bI_RED*[ 0.15
                          0.0 ];

    C_bI_BLACK = [  cos(drop_states_BLACK(3)) sin(drop_states_BLACK(3))
                   -sin(drop_states_BLACK(3)) cos(drop_states_BLACK(3)) ];


    Vec_BLACK  = C_bI_BLACK*[ 0.15
                              0.0 ];    

    line([drop_states_RED(2),drop_states_RED(2)+Vec_RED(2)],[drop_states_RED(1),drop_states_RED(1)+Vec_RED(1)],'Color','red');
    line([drop_states_BLACK(2),drop_states_BLACK(2)+Vec_BLACK(2)],[drop_states_BLACK(1),drop_states_BLACK(1)+Vec_BLACK(1)],'Color','black');


    grid on;
    xlabel('Y-Coordinate (m)');
    ylabel('X-Coordinate (m)');
end
    


% --- Executes on selection change in popupmenu2.
function popupmenu2_Callback(hObject, eventdata, handles)
% hObject    handle to popupmenu2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns popupmenu2 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from popupmenu2


% --- Executes during object creation, after setting all properties.
function popupmenu2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to popupmenu2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
MyFolderInfo = dir([cd '\*.slx']);
list = {MyFolderInfo.name};
set(hObject,'String',list);


% --- Executes on button press in pushbutton20.
function pushbutton20_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton20 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

selectedFile = get(handles.popupmenu2,'Value');
filenames    = get(handles.popupmenu2,'String');

open(filenames{selectedFile});
pause(2);
set_param(filenames{selectedFile}((1:end-4)), 'ZoomFactor','FitSystem')




function edit2_Callback(hObject, eventdata, handles)
% hObject    handle to edit2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit2 as text
%        str2double(get(hObject,'String')) returns contents of edit2 as a double


% --- Executes during object creation, after setting all properties.
function edit2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

set(hObject,'String',evalin('base','REDMass'));



function edit3_Callback(hObject, eventdata, handles)
% hObject    handle to edit3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit3 as text
%        str2double(get(hObject,'String')) returns contents of edit3 as a double


% --- Executes during object creation, after setting all properties.
function edit3_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

set(hObject,'String',evalin('base','BLACKMass'));



function edit4_Callback(hObject, eventdata, handles)
% hObject    handle to edit4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit4 as text
%        str2double(get(hObject,'String')) returns contents of edit4 as a double


% --- Executes during object creation, after setting all properties.
function edit4_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

set(hObject,'String',evalin('base','REDInertia'));



function edit5_Callback(hObject, eventdata, handles)
% hObject    handle to edit5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit5 as text
%        str2double(get(hObject,'String')) returns contents of edit5 as a double


% --- Executes during object creation, after setting all properties.
function edit5_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

set(hObject,'String',evalin('base','BLACKInertia'));


% --- Executes on button press in radiobutton11.
function radiobutton11_Callback(hObject, eventdata, handles)
% hObject    handle to radiobutton11 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of radiobutton11


% --- Executes on button press in radiobutton12.
function radiobutton12_Callback(hObject, eventdata, handles)
% hObject    handle to radiobutton12 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of radiobutton12

% --- Executes on button press in Save Data.
function pushbutton23_Callback(~, ~, handles) 

% Grab the file name from the drop down menu:

selectedFile   = get(handles.popupmenu2,'Value');
filenames      = get(handles.popupmenu2,'String');

R = get(handles.radiobutton5,'Value');
B = get(handles.radiobutton8,'Value');

if R == 1 && B == 0

    % Open up a connection to the RED platform:

    r              = raspberrypi('192.168.0.100', 'pi', 'raspberry');

    % Retrieve any data file ending with .mat:

    getFile(r,[filenames{selectedFile}((1:end-4)) '*.mat']);

    % Delete the file from the RP3:

    deleteFile(r,[filenames{selectedFile}((1:end-4)) '*.mat']);

    % Move the file to a folder for storage:

    datetime       = clock;

    foldername_RED = ['ExperimentData_RED_' num2str(datetime(1)) '_' ...
        num2str(datetime(2)) '_' num2str(datetime(3)) '_'...
    num2str(datetime(3)) '_' num2str(datetime(5))];

    movefile([cd '\' filenames{selectedFile}((1:end-4)) '*.mat'],...
    [cd '\Saved Data\' foldername_RED '\']);

elseif R == 0 && B == 1

    % Repeat as above, but for the BLACK platform:

    r = raspberrypi('192.168.0.101', 'pi', 'raspberry');

    getFile(r,[filenames{selectedFile}((1:end-4)) '*.mat']);

    deleteFile(r,[filenames{selectedFile}((1:end-4)) '*.mat']);

    % Move the file to a folder for storage:

    datetime       = clock;

    foldername_BLA = ['ExperimentData_BLACK_' num2str(datetime(1)) '_' ...
        num2str(datetime(2)) '_' num2str(datetime(3)) '_'...
    num2str(datetime(3)) '_' num2str(datetime(5))];

    movefile([cd '\' filenames{selectedFile}((1:end-4)) '*.mat'],...
    [cd '\Saved Data\' foldername_BLA '\']);

elseif R == 1 && B == 1

    % Open up a connection to the RED platform:

    r              = raspberrypi('192.168.0.100', 'pi', 'raspberry');

    % Retrieve any data file ending with .mat:

    getFile(r,[filenames{selectedFile}((1:end-4)) '*.mat']);

    % Delete the file from the RP3:

    deleteFile(r,[filenames{selectedFile}((1:end-4)) '*.mat']);

    % Move the file to a folder for storage:

    datetime       = clock;

    foldername_RED = ['ExperimentData_RED_' num2str(datetime(1)) '_' ...
        num2str(datetime(2)) '_' num2str(datetime(3)) '_'...
    num2str(datetime(3)) '_' num2str(datetime(5))];

    movefile([cd '\' filenames{selectedFile}((1:end-4)) '*.mat'],...
    [cd '\Saved Data\' foldername_RED '\']);

    % Repeat as above, but for the BLACK platform:

    r = raspberrypi('192.168.0.101', 'pi', 'raspberry');

    getFile(r,[filenames{selectedFile}((1:end-4)) '*.mat']);

    deleteFile(r,[filenames{selectedFile}((1:end-4)) '*.mat']);

    foldername_BLA = ['ExperimentData_BLACK_' num2str(datetime(1)) '_' ...
        num2str(datetime(2)) '_' num2str(datetime(3)) '_'...
    num2str(datetime(3)) '_' num2str(datetime(5))];

    movefile([cd '\' filenames{selectedFile}((1:end-4)) '*.mat'],...
    [cd '\Saved Data\' foldername_BLA '\']);

end

% --- Executes on button press in pushbutton24.
function pushbutton24_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton24 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

realTime         = get(handles.radiobutton11,'Value');
fastTime         = get(handles.radiobutton12,'Value');

if fastTime == 0 && realTime == 0
    
    ed = errordlg('You must choose an animation speed to run the simulation.','Error');
    set(ed, 'WindowStyle', 'modal');
    uiwait(ed);
    
else
    
    R = get(handles.radiobutton5,'Value');
    B = get(handles.radiobutton8,'Value');
    D = get(handles.radiobutton9,'Value');
    A = get(handles.radiobutton10,'Value');

    axes(handles.axes1);
    
    dataPacket   = evalin('base', 'dataPacket');
    
    RED_States_Sim   = dataPacket(:,5:7);
    BLACK_States_Sim = dataPacket(:,14:16);
    Univ_Time_Sim    = dataPacket(:,1);
    xLength          = evalin('base', 'xLength');
    yLength          = evalin('base', 'yLength');
    baseRate         = evalin('base', 'baseRate');
    
    % Change angle convention
    RED_States_Sim(:,3)   = -RED_States_Sim(:,3);
    BLACK_States_Sim(:,3) = -BLACK_States_Sim(:,3);
    
    Rz_RED           = RED_States_Sim(:,3);
    Rz_BLACK         = BLACK_States_Sim(:,3);

    if fastTime == 1

        Univ_Time_Sim    = downsample(Univ_Time_Sim,floor((0.5)*(1/baseRate)));
        RED_States_Sim   = downsample(RED_States_Sim,floor((0.5)*(1/baseRate)));
        BLACK_States_Sim = downsample(BLACK_States_Sim,floor((0.5)*(1/baseRate)));
        Rz_RED           = RED_States_Sim(:,3);
        Rz_BLACK         = BLACK_States_Sim(:,3);

    end
    
    for i = 2:length(RED_States_Sim)
        
        stopAnim = get(handles.togglebutton1,'Value');
        
        C_bI_RED = [  cos(Rz_RED(i)) sin(Rz_RED(i))
                     -sin(Rz_RED(i)) cos(Rz_RED(i)) ];
        
        Vec_RED  = C_bI_RED*[ 0.15
                              0.0 ];
                          
        C_bI_BLACK = [  cos(Rz_BLACK(i)) sin(Rz_BLACK(i))
                       -sin(Rz_BLACK(i)) cos(Rz_BLACK(i)) ];
        
        Vec_BLACK  = C_bI_BLACK*[ 0.15
                                  0.0 ];                          
      
        % Plot the table
        tic;
        line([0 yLength],[0 0],'Color','black','LineWidth',2);
        hold on;
        line([yLength yLength],[0 xLength],'Color','black','LineWidth',2);
        line([yLength 0],[xLength xLength],'Color','black','LineWidth',2);
        line([0 0],[xLength 0],'Color','black','LineWidth',2);
        if R == 1 && B == 0 && D == 0 && A == 0 || R == 1 && B == 0 && D == 0 && A == 1
            DrawRectangle([RED_States_Sim(i,2),RED_States_Sim(i,1),0.3,0.3,RED_States_Sim(i,3)],'-r');
            
            line([RED_States_Sim(i,2),RED_States_Sim(i,2)+Vec_RED(2)],[RED_States_Sim(i,1),RED_States_Sim(i,1)+Vec_RED(1)],'Color','red');
            
        elseif R == 0 && B == 1 && D == 0 && A == 0
            
            DrawRectangle([BLACK_States_Sim(i,2),BLACK_States_Sim(i,1),0.3,0.3,BLACK_States_Sim(i,3)],'-k');
            
            line([BLACK_States_Sim(i,2),BLACK_States_Sim(i,2)+Vec_BLACK(2)],[BLACK_States_Sim(i,1),BLACK_States_Sim(i,1)+Vec_BLACK(1)],'Color','black');
        elseif R == 1 && B == 1 && D == 0 && A == 0 || R == 1 && B == 1 && D == 0 && A == 1
            DrawRectangle([RED_States_Sim(i,2),RED_States_Sim(i,1),0.3,0.3,RED_States_Sim(i,3)],'-r');
            DrawRectangle([BLACK_States_Sim(i,2),BLACK_States_Sim(i,1),0.3,0.3,BLACK_States_Sim(i,3)],'-k');
            line([RED_States_Sim(i,2),RED_States_Sim(i,2)+Vec_RED(2)],[RED_States_Sim(i,1),RED_States_Sim(i,1)+Vec_RED(1)],'Color','red');
            line([BLACK_States_Sim(i,2),BLACK_States_Sim(i,2)+Vec_BLACK(2)],[BLACK_States_Sim(i,1),BLACK_States_Sim(i,1)+Vec_BLACK(1)],'Color','black');
        end
        txtT = horzcat('Time: ',num2str(Univ_Time_Sim(i)));
        text(0.1,3.75,txtT); 
        drawnow;
        tend = toc;
        
        if stopAnim == 1
            set(handles.togglebutton1,'Value',0)
            break;
        end
        
        if realTime == 1
            
           pause(0.05-tend);
           
        end
        
        if fastTime == 1
            
            pause(0.0005-tend);
            
        end
        
        if i ~= length(RED_States_Sim)
            
            cla;
            
        end
        
        if i == length(RED_States_Sim)
            
           txt1 = 'Simulation Complete.';
           
           text(1,3.75,txt1); 
           
        end
        
    end
    
end


% --- Executes on button press in togglebutton1.
function togglebutton1_Callback(hObject, eventdata, handles)
% hObject    handle to togglebutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of togglebutton1

function edit6_Callback(hObject, eventdata, handles)
% hObject    handle to edit6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit6 as text
%        str2double(get(hObject,'String')) returns contents of edit6 as a double


% --- Executes during object creation, after setting all properties.
function edit6_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
set(hObject,'String',1/evalin('base','baseRate'));

% --- Executes during object creation, after setting all properties.
function pushbutton24_CreateFcn(hObject, eventdata, handles)
% hObject    handle to pushbutton24 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called
set(hObject,'enable','off');

% --- Executes during object creation, after setting all properties.
function togglebutton1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to togglebutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called
set(hObject,'enable','off');


% --- Executes on button press in pushbutton26.
function pushbutton26_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton26 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Grab the file name from the drop down menu:

dataPacket     = evalin('base', 'dataPacket');

% Move the file to a folder for storage:

datetime       = clock;

foldername = ['SimulationData_' num2str(datetime(1)) '_' ...
    num2str(datetime(2)) '_' num2str(datetime(3)) '_'...
num2str(datetime(3)) '_' num2str(datetime(5))];

save('dataPacket_SIM.mat','dataPacket');

mkdir([cd '\Saved Data\' foldername '\']);

movefile([cd '\dataPacket_SIM.mat'],...
[cd '\Saved Data\' foldername '\dataPacket_SIM.mat']);


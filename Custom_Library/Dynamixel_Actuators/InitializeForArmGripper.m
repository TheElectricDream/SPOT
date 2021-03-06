classdef InitializeForArmGripper < matlab.System ...
        & coder.ExternalDependency ...
        & matlab.system.mixin.Propagates ...
        & matlab.system.mixin.CustomIcon
    %
    % System object template for a sink block.
    % 
    % This template includes most, but not all, possible properties,
    % attributes, and methods that you can implement for a System object in
    % Simulink.
    %
    % NOTE: When renaming the class name Sink, the file name and
    % constructor name must be updated to use the class name.
    %
    
    % Copyright 2016 The MathWorks, Inc.
    %#codegen
    %#ok<*EMCA>
    
    properties
              
    end
    
    properties (Nontunable)

        P_GAIN_ARM          =  400; 
        I_GAIN_ARM          =  0; 
        D_GAIN_ARM          =  200; 
        P_GAIN_PROX         =  400;                     
        I_GAIN_PROX         =  0; 
        D_GAIN_PROX         =  200;
        P_GAIN_DIST         =  400; 
        I_GAIN_DIST         =  0;                       
        D_GAIN_DIST         =  200; 
        MAX_POSITION_ARM    =  3072; 
        MIN_POSITION_ARM    =  1024;                  
        MAX_POSITION_PROX   =  3072; 
        MIN_POSITION_PROX   =  1024;
        MAX_POSITION_DIST   =  3072;                              
        MIN_POSITION_DIST   =  1024; 
        VELOCITY_LIMIT_ARM  =  0; 
        VELOCITY_LIMIT_GRIP =  0; 
        MAX_CURRENT_GRIP    =  1000; 
        
    end
    
    properties (Access = private)

    end
    
    methods
        % Constructor
        function obj = InitializeForArmGripper(varargin)
            % Support name-value pair arguments when constructing the object.
            setProperties(obj,nargin,varargin{:});
        end
    end
    
    methods (Access=protected)
        function setupImpl(obj)
            if isempty(coder.target)
                % Place simulation setup code here
            else
                % Call C-function implementing device initialization
                 coder.cinclude('dynamixel_sdk.h');
                 coder.cinclude('dynamixel_functions.h');
                 coder.ceval('initialize_dynamixel_arm_gripper_control',obj.P_GAIN_ARM, obj.I_GAIN_ARM, obj.D_GAIN_ARM, obj.P_GAIN_PROX, ...
                                              obj.I_GAIN_PROX, obj.D_GAIN_PROX,obj.P_GAIN_DIST, obj.I_GAIN_DIST, ...
                                              obj.D_GAIN_DIST, obj.MAX_POSITION_ARM, obj.MIN_POSITION_ARM, ...
                                              obj.MAX_POSITION_PROX, obj.MIN_POSITION_PROX,obj.MAX_POSITION_DIST, ...
                                              obj.MIN_POSITION_DIST, obj.VELOCITY_LIMIT_ARM, obj.VELOCITY_LIMIT_GRIP, ...
                                              obj.MAX_CURRENT_GRIP);
            end
        end
        
        function stepImpl(~,~)  
            if isempty(coder.target)
                % Place simulation output code here 
            else
                % Call C-function implementing device output
            end
        end
        
        function releaseImpl(obj) %#ok<MANU>
            if isempty(coder.target)
                % Place simulation termination code here
            else
                % Call C-function implementing device termination
                % Call C-function implementing device initialization
                 coder.cinclude('dynamixel_sdk.h');
                 coder.cinclude('dynamixel_functions.h');
                 coder.ceval('terminate_dynamixel');
            end
        end
    end
    
    methods (Access=protected)
        %% Define input properties
        function num = getNumInputsImpl(~)
            num = 0;
        end
        
        function num = getNumOutputsImpl(~)
            num = 0;
        end
        
        function flag = isInputSizeLockedImpl(~,~)
            flag = true;
        end
        
        function varargout = isInputFixedSizeImpl(~,~)
            varargout{1} = true;
        end
        
        function flag = isInputComplexityLockedImpl(~,~)
            flag = true;
        end
        
        function validateInputsImpl(~, ~)
            if isempty(coder.target)
                % Run input validation only in Simulation
                % validateattributes(u,{'double'},{'scalar'},'','u');
            end
        end
        
        function icon = getIconImpl(~)
            % Define a string as the icon for the System block in Simulink.
            icon = 'InitializeForArmGripper';
        end  
        
    end
    
    methods (Static, Access=protected)
        function simMode = getSimulateUsingImpl(~)
            simMode = 'Interpreted execution';
        end
        
        function isVisible = showSimulateUsingImpl
            isVisible = false;
        end
        
        function header = getHeaderImpl
            header = matlab.system.display.Header('InitializeForArmGripper','Title',...
                'Dynamixel Actuator - Initialize Arm-Gripper Control','Text',...
                ['This simulink block initializes the actuators for arm-gripper control. '...
                'This block must be placed ONCE in the diagram, at the top level.' newline]);
        end
        
    end
    
    methods (Static)
        function name = getDescriptiveName()
            name = 'InitializeForArmGripper';
        end
        
        function b = isSupportedContext(context)
            b = context.isCodeGenTarget('rtw');
        end
        
        function updateBuildInfo(buildInfo, context)
            if context.isCodeGenTarget('rtw')
                % Update buildInfo
                srcDir = fullfile(fileparts(mfilename('fullpath')),'src');
                includeDir = fullfile(fileparts(mfilename('fullpath')),'include');
                addIncludePaths(buildInfo,includeDir);
                
                % Add all SOURCE files for compiling robotis software
                addSourceFiles(buildInfo,'protocol2_packet_handler.cpp', srcDir);
                addSourceFiles(buildInfo,'protocol1_packet_handler.cpp', srcDir);
                addSourceFiles(buildInfo,'port_handler_windows.cpp', srcDir);
                addSourceFiles(buildInfo,'port_handler_mac.cpp', srcDir);
                addSourceFiles(buildInfo,'port_handler_linux.cpp', srcDir);
                addSourceFiles(buildInfo,'port_handler_arduino.cpp', srcDir);
                addSourceFiles(buildInfo,'port_handler.cpp', srcDir);
                addSourceFiles(buildInfo,'packet_handler.cpp', srcDir);
                addSourceFiles(buildInfo,'group_sync_write.cpp', srcDir);
                addSourceFiles(buildInfo,'group_sync_read.cpp', srcDir);
                addSourceFiles(buildInfo,'group_bulk_write.cpp', srcDir);
                addSourceFiles(buildInfo,'group_bulk_read.cpp', srcDir);
                addSourceFiles(buildInfo,'dynamixel_functions.cpp', srcDir);
                
                % Add all INCLUDE files for compiling robotis software
                addIncludeFiles(buildInfo,'protocol2_packet_handler.h',includeDir);
                addIncludeFiles(buildInfo,'protocol1_packet_handler.h',includeDir);
                addIncludeFiles(buildInfo,'port_handler_windows.h',includeDir);
                addIncludeFiles(buildInfo,'port_handler_mac.h',includeDir);
                addIncludeFiles(buildInfo,'port_handler_linux.h',includeDir);
                addIncludeFiles(buildInfo,'port_handler.h',includeDir);
                addIncludeFiles(buildInfo,'packet_handler.h',includeDir);
                addIncludeFiles(buildInfo,'group_sync_write.h',includeDir);
                addIncludeFiles(buildInfo,'group_sync_read.h',includeDir);
                addIncludeFiles(buildInfo,'group_bulk_write.h',includeDir);
                addIncludeFiles(buildInfo,'group_bulk_read.h',includeDir);
                addIncludeFiles(buildInfo,'dynamixel_sdk.h',includeDir);
                addIncludeFiles(buildInfo,'port_handler_arduino.h',includeDir);
                addIncludeFiles(buildInfo,'dynamixel_functions.h',includeDir)
                
                %addLinkFlags(buildInfo,{'-lSource'});
                %addLinkObjects(buildInfo,'sourcelib.a',srcDir);
                %addCompileFlags(buildInfo,{'-D_DEBUG=1'});
                %addDefines(buildInfo,'MY_DEFINE_1')
            end
        end
    end
end

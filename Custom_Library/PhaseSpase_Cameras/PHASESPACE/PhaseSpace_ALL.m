classdef PhaseSpace_ALL < matlab.System ...
        & coder.ExternalDependency ...
        & matlab.system.mixin.Propagates ...
        & matlab.system.mixin.CustomIcon
    %
    % System object template for a source block.
    % 
    % This template includes most, but not all, possible properties,
    % attributes, and methods that you can implement for a System object in
    % Simulink.
    %
    % NOTE: When renaming the class name Source, the file name and
    % constructor name must be updated to use the class name.
    %
    
    % Copyright 2016 The MathWorks, Inc.
    %#codegen
    %#ok<*EMCA>
    
    properties
        % Platform Selection
        platformSelection = 3;
    end
    
    properties (Nontunable)
        % Public, non-tunable properties.
    end
    
    properties (Access = private)
        % Pre-computed constants.
    end
    
    methods
        % Constructor
        function obj = PhaseSpace_ALL(varargin)
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
                 coder.cinclude('owl.hpp');
                 coder.cinclude('phasespace_headers.h');
                 coder.ceval('initialize_phasespace',obj.platformSelection);
            end
        end
        
        function y = stepImpl(obj)
            
            y1 = double(0);
            y2 = double(0);
            y3 = double(0);
            y4 = double(0);
            y5 = double(0);
            y6 = double(0);
            y7 = double(0);
            y   = zeros(1,7,'double');

            if isempty(coder.target)
                % Place simulation output code here
            else
                
                coder.ceval('stream_phasespace',coder.ref(y1),...
                             coder.ref(y2),coder.ref(y3),coder.ref(y4),...
                             coder.ref(y5),coder.ref(y6),coder.ref(y7),...
                             obj.platformSelection);
                y  =[y7/10, y1/1000, y2/1000, y3, y4/1000, y5/1000, y6];

            end
        end
        
        function releaseImpl(obj) %#ok<MANU>
            if isempty(coder.target)
                % Place simulation termination code here
            else
                % Call C-function implementing device termination
                coder.ceval('terminate_phasespace');
            end
        end
    end
    
    methods (Access=protected)
        %% Define output properties
        function num = getNumInputsImpl(~)
            num = 0;
        end
        
        function num = getNumOutputsImpl(~)
            num = 1;
        end
        
        function flag = isOutputSizeLockedImpl(~,~)
            flag = true;
        end
        
        function varargout = isOutputFixedSizeImpl(~,~)
            varargout{1} = true;
        end
        
        function flag = isOutputComplexityLockedImpl(~,~)
            flag = true;
        end
        
        function varargout = isOutputComplexImpl(~)
            varargout{1} = false;
        end
        
        function varargout = getOutputSizeImpl(~)
            varargout{1} = [1,7];
        end
        
        function varargout = getOutputDataTypeImpl(~)
            varargout{1} = 'double';
        end
        
        function icon = getIconImpl(~)
            % Define a string as the icon for the System block in Simulink.
            icon = 'Stream_PS_ALL';
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
            header = matlab.system.display.Header('PhaseSpace_ALL','Title',...
                'Initialize and Stream PhaseSpace','Text',...
                ['This simulink block initializes the PhaseSpace cameras to '...
                'collect position data. The output of this block is a [1x3] vector '...
                'containing the position in [m] and the attitude in [rad].' newline]);
        end
        
    end
    
    methods (Static)
        function name = getDescriptiveName()
            name = 'Stream_PS_ALL';
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
                
                % Add the INCLUDE files for the PhaseSpace camera                
                addIncludeFiles(buildInfo,'vector.h',includeDir);
                addIncludeFiles(buildInfo,'thread.h',includeDir);
                addIncludeFiles(buildInfo,'socket.h',includeDir);
                addIncludeFiles(buildInfo,'serialize.h',includeDir);
                addIncludeFiles(buildInfo,'protocol.h',includeDir);
                addIncludeFiles(buildInfo,'packet.h',includeDir);
                addIncludeFiles(buildInfo,'owl_rpd.h',includeDir);
                addIncludeFiles(buildInfo,'owl_math.h',includeDir);
                addIncludeFiles(buildInfo,'owl.h',includeDir);
                addIncludeFiles(buildInfo,'libowl.h',includeDir);
                addIncludeFiles(buildInfo,'owl_rpd.hpp',includeDir);
                addIncludeFiles(buildInfo,'owl.hpp',includeDir);
                addIncludeFiles(buildInfo,'phasespace_headers.h',includeDir);
                
                % Add the SOURCE files for the PhaseSpace camera 
                addSourceFiles(buildInfo,'socket.cc',srcDir);
                addSourceFiles(buildInfo,'owl_rpd.cc',srcDir);
                addSourceFiles(buildInfo,'owl.cc',srcDir);
                addSourceFiles(buildInfo,'libowl_socket.cc',srcDir);
                addSourceFiles(buildInfo,'libowl.cc',srcDir);
                addSourceFiles(buildInfo,'filters.cc',srcDir);
                addSourceFiles(buildInfo,'phasespace_functions.cpp',srcDir);
                
                %addLinkFlags(buildInfo,{'-lSource'});
                %addLinkObjects(buildInfo,'sourcelib.a',srcDir);
                %addCompileFlags(buildInfo,{'-D_DEBUG=1'});
                %addDefines(buildInfo,'MY_DEFINE_1')
            end
        end
    end
end

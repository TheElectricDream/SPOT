% The following script will create a new SPOT experiment.

function [] = newExperiment()

startingDirectory = cd;

expName = inputdlg('Please enter the name of the experiment (no spaces):');

cd 'D:\Dropbox\SPOT 2.0 Software (v2.12)\Low-Level Files\'

copyfile('D:\Dropbox\SPOT 2.0 Software (v2.12)\Low-Level Files\Experiment Source Code',...
    [startingDirectory '\' expName{1,1}]);

cd(startingDirectory);

end
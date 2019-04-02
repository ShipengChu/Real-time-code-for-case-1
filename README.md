# Real-time-code-for-case-1
The real time code for case 1
1.	This program for real time calibration is based on Epanet secondary development, compiled by vs 2013. 
    Before running the program, you need to install vs2013 or another version of visual studio.
2.	There is a folder here named “real time Calibration Code for case 1”, which are the code for Case 1and Case 2. 
    Open a folder, double-click "RealtimeCalibration.sln" to start the program.  
3.  Two files named "×××.inp" and “×××.obs” are used as input to the program. The first file named "×××.inp" is the hydrualic model 
    input file. The second file named “×××.obs” is used to store measured value and prior information of nodal demand. Both files are 
    stored in the root folder.
4.	"×××.obs" consist of five parts, namely [OBSERVETIME]， [TANK], [JUNCTIONS], [PIPES] and [JUNDEMANDS] which correspond to 
    time of real-time data, reservoir discharge, pressure sensor value, flow sensor value and prior nodal demand. Each row of data 
    contains three elements namely sensor id, measured value and standard deviation.

# Welcome to the Lygos Absorption Speed File Collection.

The Files found on the repository are to be used for the SAP05 Absorption Speed by LVIT experiment.

There are two sets of files. One set to be used with the Arduino IDE program. The other two be used with
Jupyter Notebook (a Python based web programming interface) accessed through Anaconda. 

The Arduino Files are as follows:
  SAP05_VoltageSetup.ino

The Jupyter Notebook Files are as follows:
  SAP05_Calibration.ipynb
  SAP05_Absorption Speed by LVIT.ipynb
  SAP05_Analysis_Single.ipynb
  SAP05_Analysis_All.ipynb



The Arduino files are to be ran each time the system is booted up.

The Jupyter files are to be ran after the Arduino. 
  SAP05_Calibration.ipynb is to be ran at the beginning of the data collection session. It is not required before 
  each trial.

  SAP05_Absorption Speed by LVIT.ipynb is the main data collection program. Run for each trial and input the information when prompted. 
  The Trial number, Brand, Initial weight, and final weight are prompted to enter.

  SAP05_Analysis_Single.ipynb runs the analysis for a single brand. It will plot a cc vs time and rate vs time graph
  for each trial and a composite of all graphs. 

  SAP05_Analysis_All.ipynb runs the analysis for each brand. It is a composite of the Single for each brand.


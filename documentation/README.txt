The Trajectory Cycle program serves as a means of running a cyclic actuator inflation test. 
This program is designed for the arduino nano platform and is intended to be used with a
2-way proportional solenoid valves arranged in a fill/bleed circuit. The program is designed to be used with any soft pneumatic actuator, and requires tuning of PID gain values for different actuators. Zeigler-Nichols method is a recommended starting point.

The codebase will not be able to properly upload to the controller unless it is correctly formatted for your computer. Be sure to follow the PlatformIO and codebase installation instructions found in the "Install, Tune, & Run the Controller" How-to Word document in the documentation sub-folder before downloading the entire GitHub repository.

In the codebase, the main control loop can be found in main.cpp, but all variables relevant to the adjustment of the controller can be found in adjustableSettings.cpp. For details on how the controller works, what purpose it serves, what all relevant variables do, and how to tune the controller, please refer to the Powerpoint presentation and word documents included in the documentation directory.

--Evan Comiskey, 2024/12, MIT Fabrication-Integrated Design Lab, comiskey@mit.edu

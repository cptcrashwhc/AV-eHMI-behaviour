# AV-eHMI-behaviour
Autonomous vehicle eHMI Intention Conveyance signalling for pedestrians, to control graphical outputs over a TI DLP5531-Q1, based on pedestrian position and pose detection parameters from a proprietary FCW module. 

This smart mobility project, titled “Autonomous Vehicle eHMI (external-Human Machine Interface) and VRU (Vulnerable Road User) Intention Conveyance”, aims to enhance AV road safety and pedestrian confidence during interactions between AVs and pedestrians at crosswalks. A two-phase perception and intention conveyance procedure is implemented, where a pedestrian perception model predicts and determines the behaviour of a crossing pedestrian, and a vehicle exterior light projection module with a control software visually conveys the vehicle’s state and intentions to the pedestrian.

The Input Handling class interfaces with the Redis server to receive and process Intention Fusion data from the perception stack. This class then selects the scenario to be activated based on the parameters with a selector logic which outputs a decision selector index.

The Scenario classes handle the configuration of pedestrian scenarios by preloading each scenarioprofile with a specific image or video file sequence for output display. Upon receiving the decision selector index from the Input class, the Scenario class selects the corresponding scenario profile,which then engages the Output classes for display.

The Output classes use functions from the OpenCV library to handle the reading of pre-loaded images and animations for projection output. 

Codes built and run on Linux.

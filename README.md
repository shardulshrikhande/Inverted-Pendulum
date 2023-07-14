# Inverted-Pendulum

The aim of the project is to create a control system that allows us to balance an Inverted Pendulum, by building a closed loop control system. 

The project consists of Mechanical, Electrical hardware, and software implementation of algorithms to balance the pendulum. 

1.	The mechanical system consists of a cart, with gears, which are driven by a BLDC motor, a screw joint for the pendulum, and providing mounting for the motor. 
2.	The Electrical hardware consists of the following: Feedback Sensors for the rotor angle of the motor and the pendulum’s angle via Encoders, A Motor and Motor Drive System (in this case, a BLDC and BLDC Drive), the actual target MCU, where the algorithm is deployed, an LCD for status display, etc
3.	In the software implementation, we do the Pin Mapping and functionality implementation of the Motor and Motor drive, as well as the closed loop control system that allows us to balance the pendulum, via code deployed on our ATMega2560.  

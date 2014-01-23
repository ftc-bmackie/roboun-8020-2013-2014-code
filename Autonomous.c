#pragma config(Hubs,  S1, HTMotor,  HTServo,  HTMotor,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motor_right,   tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motor_left,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     crank,         tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     motorG,        tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C2_1,    servo1,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"  //Include file to "handle" the Bluetooth messages.


void initializeRobot()
{
	// Place code here to sinitialize servos to starting positions.
	// Sensors are automatically configured and setup by ROBOTC. They may need a brief time to stabilize.

	return;

}

task main()
{
	initializeRobot();

	waitForStart(); // Wait for the beginning of autonomous phase.

	while (true) // goes forever
	{
		motor[motor_left] = 100;
		motor[motor_right] = 100;
		wait1Msec(2000);
		motor[motor_left] = 100;
		motor[motor_right] = -100;
		wait1Msec(1500);
		motor[motor_left] = 100;
		motor[motor_right] = 100;
		wait1Msec(2000);
		motor[motor_left] = 0;
		motor[motor_left] = 0;
		wait10Msec(300000);
	}
}

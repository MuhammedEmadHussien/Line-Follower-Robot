#include "../Common/STD_Types.h"
#include "../Common/BIT_Math.h"
#include "MotorDriver_interface.h"
#include "../MCAL/DIO_interface.h"


void MotorDriver_Init(void)
{
	// set directions and select pins for motor
	DIO_SetPinDir('C',0,1);
	DIO_SetPinDir('C',1,1);
	DIO_SetPinDir('C',2,1);
	DIO_SetPinDir('C',3,1);

}

void MotorDriver_MoveForward(void)
{
	// for motor in write side
	DIO_WritePin('C',0,1);
	DIO_WritePin('C',1,0);


	// for motor in left side
	DIO_WritePin('C',2,1);
	DIO_WritePin('C',3,0);




}


void MotorDriver_MoveBackward(void)
{
	// for motor in write side
	DIO_WritePin('C',0,0);
	DIO_WritePin('C',1,1);


	// for motor in write side
	DIO_WritePin('C',2,0);
	DIO_WritePin('C',3,1);

}


void MotorDriver_MoveForwardRight(void)
{
	// for motor in write side
	DIO_WritePin('C',0,0);
	DIO_WritePin('C',1,0);


	// for motor in write side
	DIO_WritePin('C',2,1);
	DIO_WritePin('C',3,0);

}

void MotorDriver_MoveForwardLeft(void)
{
	// for motor in write side
	DIO_WritePin('C',0,1);
	DIO_WritePin('C',1,0);


	// for motor in write side
	DIO_WritePin('C',2,0);
	DIO_WritePin('C',3,0);

}

void MotorDriver_MoveBackwardRight(void)
{

	// for motor in write side
		DIO_WritePin('C',0,0);
		DIO_WritePin('C',1,1);


		// for motor in write side
		DIO_WritePin('C',2,0);
		DIO_WritePin('C',3,0);
}
void MotorDriver_MoveBackwardLeft(void)
{

	// for motor in write side
		DIO_WritePin('C',0,0);
		DIO_WritePin('C',1,0);


		// for motor in write side
		DIO_WritePin('C',2,0);
		DIO_WritePin('C',3,1);
}


void MotorDriver_Stop(void)
{
	// for motor in write side
		DIO_WritePin('C',0,0);
		DIO_WritePin('C',1,0);


		// for motor in write side
		DIO_WritePin('C',2,0);
		DIO_WritePin('C',3,0);

		/*
		 * or
		 * 	// for motor in write side
		DIO_WritePin('A',0,1);
		DIO_WritePin('A',1,1);


		// for motor in write side
		DIO_WritePin('A',2,1);
		DIO_WritePin('A',3,1);
		 * */
}

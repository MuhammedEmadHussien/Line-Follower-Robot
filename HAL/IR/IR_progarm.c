#include "../Common/STD_Types.h"
#include "../Common/BIT_Math.h"
#include "../MCAL/DIO_interface.h"



void IR_Init(void)
{
	DIO_SetPinDir('B',0,0);
	DIO_SetPinDir('B',1,0);
	DIO_SetPinDir('B',2,0);
}

uint8 IR_Read_RightIR(void)
{
	return DIO_ReadPin('B',2);
}
uint8 IR_Read_middle(void)
{
	return DIO_ReadPin('B',1);
}

uint8 IR_Read_LeftIR(void)
{
	return DIO_ReadPin('B',0);
}


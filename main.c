#include "Drivers/MCAL/DIO_interface.h"
#include "Drivers/MCAL/PWM_interface.h"
#include "Drivers/HAL/MotorDriver_interface.h"
#include "Drivers/HAL/IR_interface.h"
#include "Drivers/Common/Defination.h"
#include "Drivers/Common/BIT_Math.h"
#include "Drivers/Common/STD_Types.h"





int main (void)
{
	IR_Init();
	MotorDriver_Init();
	PWM_Init();
	PWM_FAST_SetMode(1);
	PWM_SetOCRValue(192);

	while(1)
	{



		if (IR_Read_LeftIR()==WHITE && IR_Read_middle()== BLACK && IR_Read_RightIR()==WHITE)
				{
					MotorDriver_MoveForward();
				}
				else if (IR_Read_LeftIR()==BLACK && IR_Read_middle()== WHITE &&  IR_Read_RightIR()==WHITE)
				{
					MotorDriver_MoveForwardLeft();
				}
				else if (IR_Read_LeftIR()==WHITE && IR_Read_middle()== WHITE && IR_Read_RightIR()==BLACK)
				{
					MotorDriver_MoveForwardRight();
				}
				else if (IR_Read_LeftIR()==BLACK && IR_Read_middle()== BLACK && IR_Read_RightIR()==BLACK)
				{
					MotorDriver_Stop();
				}

//		if (IR_Read_LeftIR()==WHITE && IR_Read_RightIR()==WHITE)
//				{
//					MotorDriver_MoveForward();
//				}
//				else if (IR_Read_LeftIR()==BLACK && IR_Read_RightIR()==WHITE)
//				{
//					MotorDriver_MoveForwardLeft();
//				}
//				else if (IR_Read_LeftIR()==WHITE && IR_Read_RightIR()==BLACK)
//				{
//					MotorDriver_MoveForwardRight();
//				}
//				else if (IR_Read_LeftIR()==BLACK && IR_Read_RightIR()==BLACK)
//				{
//					MotorDriver_Stop();
//				}




	}

}


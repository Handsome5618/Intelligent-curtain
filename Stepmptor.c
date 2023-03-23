#include "stepmotor.h"
#include "Delay.h"
#include <REGX52.H>
//************************步进电机旋转配置
void step_28byj48_control(unsigned char step,unsigned char dir)//步数和方向设置函数
{
	unsigned char temp=step;
	
	if(dir==0) temp=7-step;
	
	switch(temp)
	{
		case 0:	IN1_A=1;IN1_B=1;IN1_C=1;IN1_D=0;break;
		case 1:	IN1_A=1;IN1_B=1;IN1_C=0;IN1_D=0;break;
		case 2:	IN1_A=1;IN1_B=1;IN1_C=0;IN1_D=1;break;
		case 3:	IN1_A=1;IN1_B=0;IN1_C=0;IN1_D=1;break;
		case 4:	IN1_A=1;IN1_B=0;IN1_C=1;IN1_D=1;break;
		case 5:	IN1_A=0;IN1_B=0;IN1_C=1;IN1_D=1;break;
		case 6:	IN1_A=0;IN1_B=1;IN1_C=1;IN1_D=1;break;
		case 7:	IN1_A=0;IN1_B=1;IN1_C=1;IN1_D=0;break;	
	}
}

void Motor_Prun()
{
	IN1_A=1;IN1_B=1;IN1_C=1;IN1_D=0;Delay(1);
	IN1_A=1;IN1_B=1;IN1_C=0;IN1_D=0;Delay(1);
	IN1_A=1;IN1_B=1;IN1_C=0;IN1_D=1;Delay(1);
	IN1_A=1;IN1_B=0;IN1_C=0;IN1_D=1;Delay(1);
	IN1_A=1;IN1_B=0;IN1_C=1;IN1_D=1;Delay(1);
	IN1_A=0;IN1_B=0;IN1_C=1;IN1_D=1;Delay(1);
	IN1_A=0;IN1_B=1;IN1_C=1;IN1_D=1;Delay(1);
	IN1_A=0;IN1_B=1;IN1_C=1;IN1_D=0;Delay(1);	
}

void Motor_Nrun()
{
	IN1_A=0;IN1_B=1;IN1_C=1;IN1_D=0;Delay(1);
	IN1_A=0;IN1_B=1;IN1_C=1;IN1_D=1;Delay(1);
	IN1_A=0;IN1_B=0;IN1_C=1;IN1_D=1;Delay(1);
	IN1_A=1;IN1_B=0;IN1_C=1;IN1_D=1;Delay(1);
	IN1_A=1;IN1_B=0;IN1_C=0;IN1_D=1;Delay(1);
	IN1_A=1;IN1_B=1;IN1_C=0;IN1_D=1;Delay(1);
	IN1_A=1;IN1_B=1;IN1_C=0;IN1_D=0;Delay(1);
	IN1_A=1;IN1_B=1;IN1_C=1;IN1_D=0;Delay(1);
}

void Motor_Stop()
{
	IN1_A=0;IN1_B=0;IN1_C=0;IN1_D=0;
}

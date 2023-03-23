#ifndef __stepmotor_H__
#define __stepmotor_H__

 #include <REGX52.H>
 
//对步进电机引脚的定义
sbit IN1_D=P2^0;
sbit IN1_C=P2^1;
sbit IN1_B=P2^2;
sbit IN1_A=P2^3;
 
void step_28byj48_control(unsigned char step,unsigned char dir);
void Motor_Prun(void);
void Motor_Nrun(void);
void Motor_Stop(void);	



#endif
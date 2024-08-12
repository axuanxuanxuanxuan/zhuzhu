#include  "STC15F2K60S2.H"
#include  "intrins.h"
unsigned int aa;																																																																																																																																																																																																											#include "intrins.h"
sbit  a=P1^0;
sbit  e=P1^4;
sbit  c=P5^4;
sbit  b=P1^1;
sbit  d=P5^5;

void Delay5000ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 211;
	j = 30;
	k = 11;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void Timer0Init()		//10微秒@11.0592MHz
{	EA=1;
    ET0=1;
	AUXR |= 0x80;		//定时器时钟1T模式
	TMOD &= 0xF0;		//设置定时器模式
	TL0 = 0x91;		//设置定时初值
	TH0 = 0xFF;		//设置定时初值
	TF0 = 0;		//清除TF0标志
	TR0 = 1;		//定时器0开始计时
}

 


void main(  )
{e=0;
a=1;
b=1;
Timer0Init();
  while(1)
 	{
//  	if(a==0)
//      {	c=0;
//   	    Delay5000ms();
//   	    c=1;
//
//      }
//  	if(b==0)
//      { 
//  	    d=0;
//  	    Delay5000ms();
//  	    Delay5000ms();
//  	    d=1;
//      }
	}	  
}


void avjvja()interrupt 1
{
TL0 = 0x91;		//设置定时初值
TH0 = 0xFF;		//设置定时初值
aa++;
if(aa>1000)
	{aa=0;}
 if(aa<10)
 {c=0; }
 else
  {c=1;}}
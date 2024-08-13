#include <STC15F2K60S2.H>
#include  "intrins.h" 																																																																																																																																																																																																										#include "intrins.h"
unsigned char aa;
unsigned char bb;
sbit  c=P5^5;
sbit  a=P1^4;
sbit  b=P1^1;
sbit  d=P1^0;
sbit  e=P1^2;
sbit  f=P1^3;
 






void Timer0Init(void)		//100微秒@11.0592MHz
{	EA=1;
    ET0=1;
	AUXR |= 0x80;		//定时器时钟1T模式
	TMOD &= 0xF0;		//设置定时器模式
	TL0 = 0xAE;		//设置定时初值
	TH0 = 0xFB;		//设置定时初值
	TF0 = 0;		//清除TF0标志
	TR0 = 1;		//定时器0开始计时
}

 



 
 void main ()
{a=0;
Timer0Init( );
 while(1)
 {if(d==0)
 {bb=20;}
 if(b==0)
 {bb=40;}
 if(e==0)
 {bb=60;}
 if(f==0)
 {bb=80;} 
  }







}


void qq () interrupt 1
{ 	TL0 = 0xAE;		//设置定时初值
	TH0 = 0xFB;		//设置定时初值
   if(aa>bb)
   {c=0;}
   else
   {c=1;}
    if(aa==100)
   {aa=0;}
    aa++;



}




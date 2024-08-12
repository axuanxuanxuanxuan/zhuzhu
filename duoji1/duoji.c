#include <STC15F2K60S2.H>
#include "intrins.h"

unsigned int  aa;
unsigned int  bb;
unsigned int  cc;

sbit q=P5^5;

sbit a=P1^4;
sbit b=P1^5;
sbit c=P1^6;
sbit d=P1^7;

sbit e=P1^3;
sbit f=P1^2;
sbit g=P1^1;
sbit h=P1^0;

void Timer0Init(void)		//20΢��@11.0592MHz
{	 EA=1;
	 ET0=1;
	AUXR |= 0x80;		//��ʱ��ʱ��1Tģʽ
	TMOD &= 0xF0;		//���ö�ʱ��ģʽ
	TL0 = 0x23;		//���ö�ʱ��ֵ
	TH0 = 0xFF;		//���ö�ʱ��ֵ
	TF0 = 0;		//���TF0��־
	TR0 = 1;		//��ʱ��0��ʼ��ʱ
}

void main ()
{Timer0Init( );
  while(1) 
  {while(a==0)
   {if(e==0)
   	{bb=25;}
   	if(f==0)
   	{bb=30;}
	if(g==0)
   	{bb=35;}
	if(h==0)
   	{bb=45;}}
   while(b==0)
   {if(e==0)
   	{bb=55;}
   	if(f==0)
   	{bb=60;}
	if(g==0)
   	{bb=65;}
	if(h==0)
   	{bb=70;}}
	while(c==0)
   {if(e==0)
   	{bb=75;}
   	if(f==0)
   	{bb=85;}
	if(g==0)
   	{bb=90;}
	if(h==0)
   	{bb=100;}}
	while(d==0)
   {if(e==0)
   	{bb=105;}
   	if(f==0)
   	{bb=110;}
	if(g==0)
   	{bb=120;}
	if(h==0)
   	{bb=125;}}
   
   
   
   
  
  
  
  
  
  
  }
 
}







void lll () interrupt 1
{TL0 = 0x23;		//���ö�ʱ��ֵ
 TH0 = 0xFF;		//���ö�ʱ��ֵ
 if(aa<=bb)
 {q=1;}
 else
 {q=0;}
 if(aa==1000)
 {aa=0;}
 aa++;
 if(cc==0)
 {a=0;
 b=1;
 c=1;
 d=1;}
 if(cc==1)
 {a=1;
 b=0;
 c=1;
 d=1;}
 if(cc==2)
 {a=1;
 b=1;
 c=0;
 d=1;}
 if(cc==3)
 {a=1;
 b=1;
 c=1;
 d=0;}
 if(cc==4)
 {cc=0;}
 cc++;






}
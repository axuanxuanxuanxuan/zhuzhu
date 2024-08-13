#include <STC15F2K60S2.H>
#include "intrins.h"
sbit DS=P5^4;
sbit SH=P3^3;
sbit ST=P3^2;

unsigned int i;
unsigned char sz[10]={0XC0,0XF9,0XA4,0XB0,0X99,0X92,0X82,0XF8,0X80,0X90};
unsigned int js;
unsigned char a,b,c,d;


void send(unsigned char DA)
{					
 for(i=0;i<8;i++)
 {
  DS=DA&0X80;
  SH=0;SH=1;
  DA<<=1;
 }
}

void Delay1ms()		//@12.000MHz
{
	unsigned char i, j;

	i = 12;
	j = 169;
	do
	{
		while (--j);
	} while (--i);
}


void Delay10ms()		//@12.000MHz
{
	unsigned char i, j;

	i = 117;
	j = 184;
	do
	{
		while (--j);
	} while (--i);
}

void Delay1000ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 46;
	j = 153;
	k = 245;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void main()
{
  js=0;
  while(1)
  {
   a=js%10;
   b=(js/10)%10;
   c=(js/100)%10;
   d=(js/1000)%10;
   send(sz[a]);	  
   send(sz[b]);	  
   send(sz[c]);	  
   send(sz[d]);
   ST=0;ST=1;	  
   js++;
   if(js>9999)
   {
	js=0;
   }
  Delay1000ms();
  }



}

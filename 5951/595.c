#include <STC8G.H>
#include "intrins.h"
#define U8 unsigned char 
sbit DS=P3^3;
sbit SH=P3^2;
sbit ST=P5^4;
void Delay100ms()		//@33.1776MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 13;
	j = 156;
	k = 83;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{P3M0=0;P3M1=0;
 P5M0=0;P5M1=0;
 while(1)
 {DS=0;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  ST=1;ST=1;
  Delay100ms();
  DS=1;SH=0;SH=1;
  DS=0;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  ST=1;ST=1;
  Delay100ms();
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=0;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  ST=1;ST=1;
  Delay100ms();
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=0;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  ST=1;ST=1;
  Delay100ms();
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=0;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  ST=1;ST=1;
  Delay100ms();
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=0;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  ST=1;ST=1;
  Delay100ms();
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=0;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  ST=1;ST=1;
  Delay100ms();
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=1;SH=0;SH=1;
  DS=0;SH=0;SH=1;
  ST=1;ST=1;
  Delay100ms(); 
 }
 
}
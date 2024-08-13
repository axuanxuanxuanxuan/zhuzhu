#include <STC8G.H>
#include "intrins.h"
unsigned char s;
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

void liushuideng(unsigned char dat)
{ for(s=0;s<8;s++)
 {DS=dat&0X80;
  SH=0;
  SH=1;
  dat=dat<<1;
  }

  }


void main()
{P3M0=0;P3M1=0;
 P5M0=0;P5M1=0;
 while(1)
 {liushuideng(0X7F);
  liushuideng(0XFF);
  ST=0;
  ST=1;
  Delay100ms(); 
  liushuideng(0XBF);
  liushuideng(0XFF);
  ST=0;
  ST=1;
  Delay100ms();
  liushuideng(0XDF);
  liushuideng(0XFF);
  ST=0;
  ST=1;
  Delay100ms(); 
  liushuideng(0XEF);
  liushuideng(0XFF);
  ST=0;
  ST=1;
  Delay100ms(); 
  liushuideng(0XF7);
  liushuideng(0XFF);
  ST=0;
  ST=1;
  Delay100ms(); 
  liushuideng(0XFB);
  liushuideng(0XFF);
  ST=0;
  ST=1;
  Delay100ms(); 
  liushuideng(0XFD);
  liushuideng(0XFF);
  ST=0;
  ST=1;
  Delay100ms(); 
  liushuideng(0XFE);
  liushuideng(0XFF);
  ST=0;
  ST=1;
  Delay100ms(); 
  liushuideng(0XFF);
  liushuideng(0X7F);
  ST=0;
  ST=1;
  Delay100ms(); 
  liushuideng(0XFF);
  liushuideng(0XBF);
  ST=0;
  ST=1;
  Delay100ms(); 
  liushuideng(0XFF);
  liushuideng(0XDF);
  ST=0;
  ST=1;
  Delay100ms(); 
  liushuideng(0XFF);
  liushuideng(0XEF);
  ST=0;
  ST=1;
  Delay100ms(); 
  liushuideng(0XFF);
  liushuideng(0XF7);
  ST=0;
  ST=1;
  Delay100ms(); 
  liushuideng(0XFF);
  liushuideng(0XFD);
  ST=0;
  ST=1;
  Delay100ms(); 
  liushuideng(0XFF);
  liushuideng(0XFE);
  ST=0;
  ST=1;
  Delay100ms(); 
   

// {DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=1;SH=0;SH=1;
//  DS=0;SH=0;SH=1;
//  ST=0;ST=1;
//  Delay100ms();
  }
 }
 
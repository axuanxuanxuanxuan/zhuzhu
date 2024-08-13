#include <STC15F2K60S2.H>
#include"intrins.h"			 
sbit zqfx=P1^0;
sbit zqkg=P1^1;
sbit yqfx=P1^2;
sbit yqkg=P1^3;
sbit zhfx=P1^4;
sbit zhkg=P1^5;
sbit yhfx=P1^6;
sbit yhkg=P1^7;
sbit s=P3^2;
sbit x=P3^3;
sbit z=P3^4;
sbit y=P3^5;
sbit r=P3^6;
sbit l=P3^7;
sbit d=P5^5;


void Delay500ms()		//@24.000MHz
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
void Delay2000ms()		//@24.000MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 183;
	j = 100;
	k = 225;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void qian()
{ yqkg=1;
  yqfx=0;
  zqkg=1;
  zqfx=0;
  zhkg=1;
  zhfx=0;
  yhkg=1;
  yhfx=0;
}
void hou()
{ yqkg=1;
  yqfx=1;
  zqkg=1;
  zqfx=1;
  zhkg=1;
  zhfx=1;
  yhkg=1;
  yhfx=1;
}
void ting()
{ yqkg=0;
  zqkg=0;
  zhkg=0;
  yhkg=0;
}

void zuo()
{ yqkg=1;
  yqfx=0;
  zqkg=0;
  zqfx=1;
  zhkg=0;
  zhfx=1;
  yhkg=1;
  yhfx=0;
}
void you()
{ yqkg=0;
  yqfx=1;
  zqkg=1;
  zqfx=0;
  zhkg=1;
  zhfx=0;
  yhkg=0;
  yhfx=1; 

}
void zhuan()
{ yqkg=1;
  yqfx=1;
  zqkg=1;
  zqfx=0;
  zhkg=1;
  zhfx=0;
  yhkg=1;
  yhfx=1; 

}

void zu()
{ hou();
  Delay2000ms();
  zuo();
  Delay2000ms();
  qian();
  Delay2000ms();
}

void main()
{ting();
 while(1)
 {while(s==1)
 {qian();
 }
 while(x==1)
 {hou();
 }
 while(z==1)
 {zuo();
  }
 while(y==1)
 {you();
 }
  while(l==1)
 {d=0;
 }
  while(r==1)
 {d=1;
 }
 ting(); 
 }
}

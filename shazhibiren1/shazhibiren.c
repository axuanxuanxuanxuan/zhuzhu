#include <STC12C2052AD.H>
#include "intrins.h"
sbit  a=P3^2;
sbit  b=P3^3;
sbit  c=P3^4;
sbit  d=P3^5;
sbit  K=P3^0;
sbit  f=P1^7;
sbit  g=P1^6;
sbit  h=P1^5;
void Delay250ms(unsigned char n)		//@12.000MHz
{	
while(n--) 
{	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 12;
	j = 103;
	k = 57;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}
 }

void Delay300ms()		//@12.000MHz
{
	unsigned char i, j, k;

	i = 14;
	j = 174;
	k = 224;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void Delay30ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 2;
	j = 67;
	k = 183;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void Delay40ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 2;
	j = 175;
	k = 75;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void ting()
{a=1;
b=1;
c=1;
d=1;
}
void  qian()
{a=0;
b=1;
c=0;
d=1;
}
void zuo()
{a=1;
b=0;
c=0;
d=1;
}
void you()
{a=0;
b=1;
c=1;
d=0;
}
void hou()
{a=1;
b=0;
c=1;
d=0;
}
void qianbi()
 {if(f==0)
 {hou();
 Delay250ms(2);
  you();
  Delay250ms(1);
  }
   }
void zhu()
{
qian();
if (h==1)
	{
	zuo();
	}
if 	(g==1)
	{
	you();
	}
}
//void main ()
//{e=1;
//
////while(e==0)
////{ting();
////Delay250ms(2);
////qian();
////Delay250ms(2);
////ting();
////Delay250ms(2);
////qian();
////Delay250ms(2);
////ting();
////Delay250ms(2);
////qian();
////Delay250ms(2);
////ting();
////Delay250ms(2);
////qian();
////Delay250ms(2);
////ting();
////Delay250ms(1);
////zuo();
////Delay250ms(6);
////ting();
////Delay250ms(1);
////you();
////Delay250ms(6);
////ting();
////Delay250ms(1);
////hou();
////Delay250ms(2);
////ting();
////Delay250ms(1);
////hou();
////Delay250ms(2);
////ting();
////Delay250ms(2);
////hou();
////Delay250ms(2);
////ting();
////Delay250ms(2);
////hou();
////Delay250ms(2);
////ting();
////Delay250ms(2);
////
////
////}
////
////}

void main ()
{
K=1;   
while(K==0)
	{
    Delay300ms();	
	while(K==1)
		{
		 zhu();
		}
	ting();
	Delay300ms();	
	}
}


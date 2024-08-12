 #include <STC15F2K60S2.H>																																																																																																																																																																																																											#include "intrins.h"
sbit  a=P1^0;
sbit  b=P1^4;
sbit  c=P5^4;
sbit  d=P1^1;

 
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

 


void main(  )
{b=0;
a=1;
while(a==0)
{c=0;
Delay5000ms();
c=1;

}
 while(d==0)
 {c=0;
Delay5000ms();
Delay5000ms();
 c=1;
 
 }
 }	  
 
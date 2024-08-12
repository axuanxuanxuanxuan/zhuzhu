#include <STC15F2K60S2.H>
#include "intrins.h"
sbit a=P1^0;
sbit b=P1^4;
sbit c=P5^4;
void Delay5ms()		//@11.0592MHz
{
	unsigned char i, j;

	i = 54;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
}


void main(  )
{b=0;
a=1;
 	
if(a==0)
{c=0;
}
while(a==0);
while(a==1)
{Delay5ms()	;
}
}
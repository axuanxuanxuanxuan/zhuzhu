#include <STC15F2K60S2.H>																																																																																																																																																																																																																																																																																																																																																																																																																																		#include
#include  "intrins.h" 
sbit ha=P1^0;
sbit wa=P1^1;
sbit hb=P1^2;
sbit wb=P1^3;
void Delay500ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 22;
	j = 3;
	k = 227;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}																										  дк      дк                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
void Delay1000ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 43;
	j = 6;
	k = 203;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{ha=1;  
wa=0;
hb=1;
wb=0;
Delay1000ms();
ha=0;  
wa=0;
hb=0;
wb=0;
Delay500ms(); 
ha=0;  
wa=1;
hb=1;
wb=0;
Delay1000ms();
ha=0;  
wa=0;
hb=0;
wb=0;
Delay500ms(); 
ha=0;  	
wa=1;
hb=0;
wb=1;
Delay1000ms();
ha=0;  
wa=0;
hb=0;
wb=0;
Delay500ms(); 
ha=1;  
wa=0;
hb=0;
wb=1;
Delay1000ms();
ha=0;  
wa=0;
hb=0;
wb=0;
Delay500ms();
}	
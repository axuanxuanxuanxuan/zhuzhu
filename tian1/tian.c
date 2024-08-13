#include <STC89C5xRC.H>
#include "intrins.h"

sbit  LEDT1=P0^0;
sbit  LEDT2=P0^1;
sbit  LEDT3=P0^2;
sbit  LEDT4=P0^3;
sbit  LEDT5=P0^4;
sbit  LEDT6=P0^5;
sbit  LEDT7=P0^6;
sbit  LEDT8=P0^7;
sbit  LEDT9=P4^6;

sbit  LEDI1=P4^5;																																							  
sbit  LEDI2=P2^7;
sbit  LEDI3=P2^6;
sbit  LEDI4=P2^5;
sbit  LEDI5=P2^4;
sbit  LEDI6=P2^3;
sbit  LEDI7=P2^2;
sbit  LEDI8=P2^1;	   
sbit  LEDI9=P3^1;

sbit  LEDA1=P1^0;
sbit  LEDA2=P1^1;
sbit  LEDA3=P1^2;
sbit  LEDA4=P1^3;
sbit  LEDA5=P1^4;
sbit  LEDA6=P1^5;
sbit  LEDA7=P1^6;
sbit  LEDA8=P1^7;
sbit  LEDA9=P3^2;
sbit  LEDA10=P3^4;

sbit  LEDN1=P3^5;
sbit  LEDN2=P3^3;
sbit  LEDN3=P3^6;
sbit  LEDN4=P3^7;
sbit  LEDN5=P3^0;
sbit  LEDN6=P2^0;
sbit  LEDN7=P4^4;

void Delay100ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 5;
	j = 144;
	k = 71;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}






void  main()
{	LEDT1=1;
	LEDT2=1;
	LEDT3=1;
	LEDT4=1;
	LEDT5=1;
	LEDT6=1;
	LEDT7=1;
	LEDT8=1;										        
	LEDT9=1; 

	LEDI1=1665;
	LEDI2=1;
	LEDI3=1;
	LEDI4=1;
	LEDI5=1;
	LEDI6=1;
	LEDI7=1;
	LEDI8=1;										        
	LEDI9=1;

	LEDA1=1;
	LEDA2=1;
	LEDA3=1;
	LEDA4=1;
	LEDA5=1;
	LEDA6=1;
	LEDA7=1;
	LEDA8=1;										        
	LEDA9=1;	
	LEDA10=1;

	LEDN1=1;
    LEDN2=1;
	LEDN3=1;
	LEDN4=1;
	LEDN5=1;
	LEDN6=1; 
	LEDN7=1;

    Delay100ms();

	LEDT1=0;
	LEDT2=0;
	LEDT3=0;
	LEDT4=0;
	LEDT5=0;
	LEDT6=0;
	LEDT7=0;
	LEDT8=0;										        
	LEDT9=0; 									        
	
	Delay100ms();
    
	LEDT1=1;
	LEDT2=1;
	LEDT3=1;
	LEDT4=1;
	LEDT5=1;
	LEDT6=1;
	LEDT7=1;
	LEDT8=1;										        
	LEDT9=1; 
	
	LEDI1=0;
	LEDI2=0;
	LEDI3=0;
	LEDI4=0;
	LEDI5=0;
	LEDI6=0;
	LEDI7=0;
	LEDI8=0;										        
	LEDI9=0;
	
	Delay100ms();

    LEDI1=1;
	LEDI2=1;
	LEDI3=1;
	LEDI4=1;																		 
	LEDI6=1;
	LEDI5=1;
	LEDI7=1;
	LEDI8=1;										        
	LEDI9=1; 

	LEDA1=0;
	LEDA2=0;
	LEDA3=0;
	LEDA4=0;
	LEDA5=0;
	LEDA6=0;
	LEDA7=0;
	LEDA8=0;										        
	LEDA9=0;	
	LEDA10=0;	
	
	Delay100ms();	

	LEDA1=1;
	LEDA2=1;
	LEDA3=1;
	LEDA4=1;
	LEDA5=1;
	LEDA6=1;
	LEDA7=1;
	LEDA8=1;										        
	LEDA9=1;	
	LEDA10=1;
	
	LEDN1=0;
    LEDN2=0;
	LEDN3=0;
	LEDN4=0;
	LEDN5=0;
	LEDN6=0; 
	LEDN7=0;
	
	Delay100ms();	
	
    LEDN1=1;
    LEDN2=1;
	LEDN3=1;
	LEDN4=1;
	LEDN5=1;
	LEDN6=1; 
	LEDN7=1;

	Delay100ms();
}
																				  
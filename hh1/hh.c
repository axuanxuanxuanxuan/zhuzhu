#include "STC15W408AS.h"
#include "intrins.h"

sbit  a=P1^0;
sbit  b=P1^4;
sbit  c=P5^4;			
  void Delay5ms()		//@12.000MHz
{
	unsigned char i, j;

	i = 59;
	j = 90;
	do
	{
		while (--j);
	} while (--i);
}

void main()
{  a=1;
b=0;
c=1;
    while(1)
   {
   
   while(a==0)
  {Delay5ms();
   while(a==0);
   c=~c;
   while(a==0); 
	 		

  
  }
	 
	 
	 
 }
 
 

}

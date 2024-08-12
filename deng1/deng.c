#include "STC8.h"
#include "intrins.h"
#define U8 unsigned char 
sbit DAT= P5^4;
U8 i ;
U8 ii ;

void low()		//@30.000MHz		 0.37US
{
U8 a,n;
DAT=1;
for(a=1;a>0;a--);
for(n=2;n>0;n--);
DAT=0;
}

void hi()		//@30.000MHz		  0.81US
{
U8 i;
DAT=1;
i = 8;
while (--i);
DAT=0;
}

void spus()   //30M		 delay300us
{
	U8 a,b;
	DAT=0;
	for(b=100;b>0;b--)
	for(a=31;a>0;a--);
    
}

void send(U8 G,R,B )
{
   for(i=0;i<8;i++)
   {if(G&0x80)
	{hi();}
	else
	{low();}
    G=G<<1;
   }	    
    for(i=0;i<8;i++)
    {if(R&0x80)
	 {hi();}
	 else
	 {low();}
     R=R<<1;
    }	    			
	for(i=0;i<8;i++)
    {if(B&0x80)
	 {hi();}
	 else
	 {low();}
     B=B<<1;
    }	    
		    
}
void Delay100ms()		//@30.000MHz
{
	unsigned char i, j, k;

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

//			  
//void liushui( )
//{unsigned char ii,iii;
//while(1)
//{ for(ii=0;ii<13;ii++)
// {for(iii=0;iii<ii;iii++)
//  {send(0,0,0);}								  
//  send(0,30,20);
//  spus();
//  delay200ms();
// }
//   
//}
//}
//
//void quancai() 
//{unsigned char m,n,v,x,z,l,k,j,h,g,f,d,s;
//for(m=0;m<13;m++)
// {send(20,20,0);
// }
//  spus();
//  delay200ms();
//  for(n=0;n<13;n++)
// {send(20,0,20);
// }
//  spus();
//  delay200ms();
//  for(v=0;v<13;v++)
// {send(0,20,20);
// }
//  spus();
//  delay200ms();
//  for(x=0;x<11;x++)
// {send(50,0,20);
// }
//  spus();
//  delay200ms();
//   for(z=0;z<11;z++)
// {send(20,5,0);
// }
//  spus();
//  delay200ms();
//   for(l=0;l<13;l++)
// {send(0,20,5);
// }
//  spus();
//  delay200ms();
//   for(k=0;k<13;k++)
// {send(20,0,0);
// }
//  spus();
//  delay200ms();
//   for(j=0;j<13;j++)
// {send(0,20,0);
// }
//  spus();		   
//  delay200ms();
//   for(h=0;h<13;h++)
// {send(0,0,20);
// }
//  spus();
//  delay200ms();
//   for(g=0;g<13;g++)
// {send(5,20,5);
// }
//  spus();
//  delay200ms();
//   for(f=0;f<13;f++)
// {send(5,5,20);
// }
//  spus();
//  delay200ms();
//   for(d=0;d<13;d++)
// {send(20,5,5);
// }
//  spus();
//  delay200ms();
//   for(s=0;s<13;s++)
// {send(20,20,20);
// }
//  spus();
//  delay200ms();
//}		 
 
//void pengzhuang( )
//{send(20,0,20);
//send(0,0,0);
//send(0,0,0);
//send(0,0,0);
//send(20,0,20);
//spus();
//delay200ms();
//send(0,0,0);
//send(20,0,20);
//send(0,0,0);
//send(20,0,20);
//send(0,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,0);
//send(20,0,20);
//send(0,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//
//send(0,20,20);
//send(0,0,0);
//send(0,0,0);
//send(0,0,0);
//send(0,20,20);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,20,20);
//send(0,0,0);
//send(0,20,20);
//send(0,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,0);
//send(0,20,20);
//send(0,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//
//send(20,20,0);
//send(0,0,0);
//send(0,0,0);
//send(0,0,0);
//send(20,20,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(20,20,0);
//send(0,0,0);
//send(20,20,0);
//send(0,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,0);
//send(20,20,0);
//send(0,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//
//send(0,0,20);
//send(0,0,0);
//send(0,0,0);
//send(0,0,0);
//send(0,0,20);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,20);
//send(0,0,0);
//send(0,0,20);
//send(0,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,0);
//send(0,0,20);
//send(0,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//
//send(20,0,0);
//send(0,0,0);
//send(0,0,0);
//send(0,0,0);
//send(20,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(20,0,0);
//send(0,0,0);
//send(20,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,0);
//send(20,0,0);
//send(0,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//
//send(0,20,0);
//send(0,0,0);
//send(0,0,0);
//send(0,0,0);
//send(0,20,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,20,0);
//send(0,0,0);
//send(0,20,0);
//send(0,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,0);
//send(0,20,0);
//send(0,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//
//send(20,20,20);
//send(0,0,0);
//send(0,0,0);
//send(0,0,0);
//send(20,20,20);
//spus();
//delay200ms();
//send(0,0,0);
//send(20,20,20);
//send(0,0,0);
//send(20,20,20);
//send(0,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,0);
//send(20,20,20);
//send(0,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//
//send(20,10,20);
//send(0,0,0);
//send(0,0,0);
//send(0,0,0);
//send(20,10,20);
//spus();
//delay200ms();
//send(0,0,0);
//send(20,10,20);
//send(0,0,0);
//send(20,10,20);
//send(0,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,0);
//send(20,10,20);
//send(0,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//
//send(20,20,10);
//send(0,0,0);
//send(0,0,0);
//send(0,0,0);
//send(20,20,10);
//spus();
//delay200ms();
//send(0,0,0);
//send(20,20,10);
//send(0,0,0);
//send(20,20,10);
//send(0,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,0);
//send(20,20,10);
//send(0,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//
//send(10,20,20);
//send(0,0,0);
//send(0,0,0);
//send(0,0,0);
//send(10,20,20);
//spus();
//delay200ms();
//send(0,0,0);
//send(10,20,20);
//send(0,0,0);
//send(10,20,20);
//send(0,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,0);
//send(10,20,20);
//send(0,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//
//send(20,10,0);
//send(0,0,0);
//send(0,0,0);
//send(0,0,0);
//send(20,10,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(20,10,0);
//send(0,0,0);
//send(20,10,0);
//send(0,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,0);
//send(20,10,0);
//send(0,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//
//send(0,20,10);
//send(0,0,0);
//send(0,0,0);
//send(0,0,0);
//send(0,20,10);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,20,10);
//send(0,0,0);
//send(0,20,10);
//send(0,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,0);
//send(0,20,10);
//send(0,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//
//send(5,0,20);
//send(0,0,0);
//send(0,0,0);
//send(0,0,0);
//send(5,0,20);
//spus();
//delay200ms();
//send(0,0,0);
//send(5,0,20);
//send(0,0,0);
//send(5,0,20);
//send(0,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,0);
//send(5,0,20);
//send(0,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//
// 
//send(20,0,5);
//send(0,0,0);
//send(0,0,0);
//send(0,0,0);
//send(20,0,5);
//spus();
//delay200ms();
//send(0,0,0);
//send(20,0,5);
//send(0,0,0);
//send(20,0,5);
//send(0,0,0);
//spus();
//delay200ms();
//send(0,0,0);
//send(0,0,0);
//send(20,0,5);
//send(0,0,0);
//send(0,0,0);
//spus();
//delay200ms();
//}


void main()
{P3M0=0;
 P3M1=0;
 P5M0=0;
 P5M1=0;
 send(0,0,0);
 spus();
  Delay100ms(); 
 while(1)
 {
  send(1,0,0);send(0,2,0);send(0,0,3);send(0,4,0);send(5,0,0);send(0,6,0);send(0,0,7);send(1,2,3);send(3,2,1);send(2,1,3);send(1,3,2);send(5,2,0);send(0,2,5);
  spus();
  Delay100ms();
 }
}



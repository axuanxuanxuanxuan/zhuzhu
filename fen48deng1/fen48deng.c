#include <STC15F2K60S2.H>
#include "intrins.h"
sbit DS=P3^4;
sbit SH=P3^3;
sbit ST=P3^2;
unsigned char i;
//unsigned int  p;
unsigned int  j;
unsigned int  t;


void Delay10ms(unsigned char l)		//@12.000MHz
{	while(l--)
   {
	unsigned char i, j;

	i = 117;
	j = 184;
	do
	{
		while (--j);
	} while (--i);
}	}

//void send(unsigned int DA)
//{
// for(i=0;i<16;i++)
// {
//  DS=DA&0X8000;
//
//  
//
//  SH=0;SH=1;
//  DA<<=1;
// }
//}

void send(unsigned int DA)
{
 for(i=0;i<16;i++)
 {
  if (DA&0X8000)
  {DS=0;}
  else{DS=1;}

  

  SH=0;SH=1;
  DA<<=1;
 }
}

void clean()
{
 send(0X0000);
 send(0X0000);
 send(0X0000);
 ST=0;ST=1;
Delay10ms(1);
}		
//void yiwei(unsigned int WA)
//{for(p==0;p;16;p++)
// {
// send(0XFFFF);
// send(0XFFFF);
// send(WA);
//
//  Delay10ms();
// }
//
//
//}


void zhen(unsigned int W1,W2,W3)
{
send(W1);
send(W2);
 send(W3);  
 ST=0;ST=1;
  Delay10ms(1);  
}

void main()
{
   clean();
 while(1) 
 {t=0x0001;
 for(j=0;j<16;j++)
 {zhen(0X0000,0X0000,t);
 t<<=1;

 }






























// zhen(0xFFFF,0xFFFF,0xFFFE);
// zhen(0xFFFF,0xFFFF,0xFFFD);
// zhen(0xFFFF,0xFFFF,0xFFFB);
// zhen(0xFFFF,0xFFFF,0xFFF7);
// zhen(0xFFFF,0xFFFF,0xFFEF);
// zhen(0xFFFF,0xFFFF,0xFFDF);
// zhen(0xFFFF,0xFFFF,0xFFBF);
// zhen(0xFFFF,0xFFFF,0xFF7F);
// zhen(0xFFFF,0xFFFF,0xFEFF);
// zhen(0xFFFF,0xFFFF,0xFDFF);
// zhen(0xFFFF,0xFFFF,0xF7FF);
// zhen(0xFFFF,0xFFFF,0xEFFF);
// zhen(0xFFFF,0xFFFF,0xDFFF);
// zhen(0xFFFF,0xFFFF,0xBFFF);
// zhen(0xFFFF,0xFFFF,0x7FFF);
// zhen(0xFFFF,0xFFFE,0xFFFF);
// zhen(0xFFFF,0xFFFD,0xFFFF);
// zhen(0xFFFF,0xFFFB,0xFFFF);
// zhen(0xFFFF,0xFFF7,0xFFFF);
// zhen(0xFFFF,0xFFEF,0xFFFF);
// zhen(0xFFFF,0xFFDF,0xFFFF);
// zhen(0xFFFF,0xFFBF,0xFFFF);
// zhen(0xFFFF,0xFF7F,0xFFFF);
// zhen(0xFFFF,0xFEFF,0xFFFF);
// zhen(0xFFFF,0xFDFF,0xFFFF);
// zhen(0xFFFF,0xFBFF,0xFFFF);
// zhen(0xFFFF,0xF7FF,0xFFFF);
// zhen(0xFFFF,0xEFFF,0xFFFF);
// zhen(0xFFFF,0xDFFF,0xFFFF);
// zhen(0xFFFF,0xBFFF,0xFFFF);
// zhen(0xFFFF,0x7FFF,0xFFFF);
// zhen(0xFFFE,0xFFFF,0xFFFF); 
// zhen(0xFFFD,0xFFFF,0xFFFF);
// zhen(0xFFFB,0xFFFF,0xFFFF); 
// zhen(0xFFF7,0xFFFF,0xFFFF);
// zhen(0xFFEF,0xFFFF,0xFFFF); 
// zhen(0xFFDF,0xFFFF,0xFFFF);
// zhen(0xFFBF,0xFFFF,0xFFFF); 
// zhen(0xFF7F,0xFFFF,0xFFFF);
// zhen(0xFEFF,0xFFFF,0xFFFF); 
// zhen(0xFDFF,0xFFFF,0xFFFF);
// zhen(0xFBFF,0xFFFF,0xFFFF); 
// zhen(0xF7FF,0xFFFF,0xFFFF);
// zhen(0xEFFF,0xFFFF,0xFFFF); 
// zhen(0xDFFF,0xFFFF,0xFFFF);
// zhen(0xBFFF,0xFFFF,0xFFFF); 
// zhen(0x7FFF,0xFFFF,0xFFFF);
//
//
//
//
//
//
// zhen(0x7FFF,0xFFFF,0xFFFE);
// zhen(0x7FFF,0xFFFF,0xFFFD);
// zhen(0x7FFF,0xFFFF,0xFFFB);
// zhen(0x7FFF,0xFFFF,0xFFF7);
// zhen(0x7FFF,0xFFFF,0xFFEF);
// zhen(0x7FFF,0xFFFF,0xFFDF);
// zhen(0x7FFF,0xFFFF,0xFFBF);
// zhen(0x7FFF,0xFFFF,0xFF7F);
// zhen(0x7FFF,0xFFFF,0xFEFF);
// zhen(0x7FFF,0xFFFF,0xFDFF);
// zhen(0x7FFF,0xFFFF,0xF7FF);
// zhen(0x7FFF,0xFFFF,0xEFFF);
// zhen(0x7FFF,0xFFFF,0xDFFF);
// zhen(0x7FFF,0xFFFF,0xBFFF);
// zhen(0x7FFF,0xFFFF,0x7FFF);
// zhen(0x7FFF,0xFFFE,0xFFFF);
// zhen(0x7FFF,0xFFFD,0xFFFF);
// zhen(0x7FFF,0xFFFB,0xFFFF);
// zhen(0x7FFF,0xFFF7,0xFFFF);
// zhen(0x7FFF,0xFFEF,0xFFFF);
// zhen(0x7FFF,0xFFDF,0xFFFF);
// zhen(0x7FFF,0xFFBF,0xFFFF);
// zhen(0x7FFF,0xFF7F,0xFFFF);
// zhen(0x7FFF,0xFEFF,0xFFFF);
// zhen(0x7FFF,0xFDFF,0xFFFF);
// zhen(0x7FFF,0xFBFF,0xFFFF);
// zhen(0x7FFF,0xF7FF,0xFFFF);
// zhen(0x7FFF,0xEFFF,0xFFFF);
// zhen(0x7FFF,0xDFFF,0xFFFF);
// zhen(0x7FFF,0xBFFF,0xFFFF);
// zhen(0x7FFF,0x7FFF,0xFFFF);
// zhen(0x7FFE,0xFFFF,0xFFFF); 
// zhen(0x7FFD,0xFFFF,0xFFFF);
// zhen(0x7FFB,0xFFFF,0xFFFF); 
// zhen(0x7FF7,0xFFFF,0xFFFF);
// zhen(0x7FEF,0xFFFF,0xFFFF); 
// zhen(0x7FDF,0xFFFF,0xFFFF);
// zhen(0x7FBF,0xFFFF,0xFFFF); 
// zhen(0x7F7F,0xFFFF,0xFFFF);
// zhen(0x7EFF,0xFFFF,0xFFFF); 
// zhen(0x7DFF,0xFFFF,0xFFFF);
// zhen(0x7BFF,0xFFFF,0xFFFF); 
// zhen(0x77FF,0xFFFF,0xFFFF);
// zhen(0x6FFF,0xFFFF,0xFFFF); 
// zhen(0x5FFF,0xFFFF,0xFFFF);
// zhen(0x3FFF,0xFFFF,0xFFFF); 
// 
//
//							 
//  
// zhen(0x3FFF,0xFFFF,0xFFFE);
// zhen(0x3FFF,0xFFFF,0xFFFD);
// zhen(0x3FFF,0xFFFF,0xFFFB);
// zhen(0x3FFF,0xFFFF,0xFFF7);
// zhen(0x3FFF,0xFFFF,0xFFEF);
// zhen(0x3FFF,0xFFFF,0xFFDF);
// zhen(0x3FFF,0xFFFF,0xFFBF);
// zhen(0x3FFF,0xFFFF,0xFF7F);
// zhen(0x3FFF,0xFFFF,0xFEFF);
// zhen(0x3FFF,0xFFFF,0xFDFF);
// zhen(0x3FFF,0xFFFF,0xF7FF);
// zhen(0x3FFF,0xFFFF,0xEFFF);
// zhen(0x3FFF,0xFFFF,0xDFFF);
// zhen(0x3FFF,0xFFFF,0xBFFF);
// zhen(0x3FFF,0xFFFF,0x7FFF);
// zhen(0x3FFF,0xFFFE,0xFFFF);
// zhen(0x3FFF,0xFFFD,0xFFFF);
// zhen(0x3FFF,0xFFFB,0xFFFF);
// zhen(0x3FFF,0xFFF7,0xFFFF);
// zhen(0x3FFF,0xFFEF,0xFFFF);
// zhen(0x3FFF,0xFFDF,0xFFFF);
// zhen(0x3FFF,0xFFBF,0xFFFF);
// zhen(0x3FFF,0xFF7F,0xFFFF);
// zhen(0x3FFF,0xFEFF,0xFFFF);
// zhen(0x3FFF,0xFDFF,0xFFFF);
// zhen(0x3FFF,0xFBFF,0xFFFF);
// zhen(0x3FFF,0xF7FF,0xFFFF);
// zhen(0x3FFF,0xEFFF,0xFFFF);
// zhen(0x3FFF,0xDFFF,0xFFFF);
// zhen(0x3FFF,0xBFFF,0xFFFF);
// zhen(0x3FFF,0x7FFF,0xFFFF);
// zhen(0x3FFE,0xFFFF,0xFFFF); 
// zhen(0x3FFD,0xFFFF,0xFFFF);
// zhen(0x3FFB,0xFFFF,0xFFFF); 
// zhen(0x3FF7,0xFFFF,0xFFFF);
// zhen(0x3FEF,0xFFFF,0xFFFF); 
// zhen(0x3FDF,0xFFFF,0xFFFF);
// zhen(0x3FBF,0xFFFF,0xFFFF); 
// zhen(0x3F7F,0xFFFF,0xFFFF);
// zhen(0x3EFF,0xFFFF,0xFFFF); 
// zhen(0x3DFF,0xFFFF,0xFFFF);
// zhen(0x3BFF,0xFFFF,0xFFFF); 
// zhen(0x37FF,0xFFFF,0xFFFF);
// zhen(0x2FFF,0xFFFF,0xFFFF);
// zhen(0x1FFF,0xFFFF,0xFFFF);
//
//
//
//
// zhen(0x1FFF,0xFFFF,0xFFFE);
// zhen(0x1FFF,0xFFFF,0xFFFD);
// zhen(0x1FFF,0xFFFF,0xFFFB);
// zhen(0x1FFF,0xFFFF,0xFFF7);
// zhen(0x1FFF,0xFFFF,0xFFEF);
// zhen(0x1FFF,0xFFFF,0xFFDF);
// zhen(0x1FFF,0xFFFF,0xFFBF);
// zhen(0x1FFF,0xFFFF,0xFF7F);
// zhen(0x1FFF,0xFFFF,0xFEFF);
// zhen(0x1FFF,0xFFFF,0xFDFF);
// zhen(0x1FFF,0xFFFF,0xF7FF);
// zhen(0x1FFF,0xFFFF,0xEFFF);
// zhen(0x1FFF,0xFFFF,0xDFFF);
// zhen(0x1FFF,0xFFFF,0xBFFF);
// zhen(0x1FFF,0xFFFF,0x7FFF);
// zhen(0x1FFF,0xFFFE,0xFFFF);
// zhen(0x1FFF,0xFFFD,0xFFFF);
// zhen(0x1FFF,0xFFFB,0xFFFF);
// zhen(0x1FFF,0xFFF7,0xFFFF);
// zhen(0x1FFF,0xFFEF,0xFFFF);
// zhen(0x1FFF,0xFFDF,0xFFFF);
// zhen(0x1FFF,0xFFBF,0xFFFF);
// zhen(0x1FFF,0xFF7F,0xFFFF);
// zhen(0x1FFF,0xFEFF,0xFFFF);
// zhen(0x1FFF,0xFDFF,0xFFFF);
// zhen(0x1FFF,0xFBFF,0xFFFF);
// zhen(0x1FFF,0xF7FF,0xFFFF);
// zhen(0x1FFF,0xEFFF,0xFFFF);
// zhen(0x1FFF,0xDFFF,0xFFFF);
// zhen(0x1FFF,0xBFFF,0xFFFF);
// zhen(0x1FFF,0x7FFF,0xFFFF);
// zhen(0x1FFE,0xFFFF,0xFFFF); 
// zhen(0x1FFD,0xFFFF,0xFFFF);
// zhen(0x1FFB,0xFFFF,0xFFFF); 
// zhen(0x1FF7,0xFFFF,0xFFFF);
// zhen(0x1FEF,0xFFFF,0xFFFF); 
// zhen(0x1FDF,0xFFFF,0xFFFF);
// zhen(0x1FBF,0xFFFF,0xFFFF); 
// zhen(0x1F7F,0xFFFF,0xFFFF);
// zhen(0x1EFF,0xFFFF,0xFFFF); 
// zhen(0x1DFF,0xFFFF,0xFFFF);
// zhen(0x1BFF,0xFFFF,0xFFFF); 
// zhen(0x17FF,0xFFFF,0xFFFF);
// zhen(0x0FFF,0xFFFF,0xFFFF);
//
//
//
// zhen(0x0FFF,0xFFFF,0xFFFE);
// zhen(0x0FFF,0xFFFF,0xFFFD);
// zhen(0x0FFF,0xFFFF,0xFFFB);
// zhen(0x0FFF,0xFFFF,0xFFF7);
// zhen(0x0FFF,0xFFFF,0xFFEF);
// zhen(0x0FFF,0xFFFF,0xFFDF);
// zhen(0x0FFF,0xFFFF,0xFFBF);
// zhen(0x0FFF,0xFFFF,0xFF7F);
// zhen(0x0FFF,0xFFFF,0xFEFF);
// zhen(0x0FFF,0xFFFF,0xFDFF);
// zhen(0x0FFF,0xFFFF,0xF7FF);
// zhen(0x0FFF,0xFFFF,0xEFFF);
// zhen(0x0FFF,0xFFFF,0xDFFF);
// zhen(0x0FFF,0xFFFF,0xBFFF);
// zhen(0x0FFF,0xFFFF,0x7FFF);
// zhen(0x0FFF,0xFFFE,0xFFFF);
// zhen(0x0FFF,0xFFFD,0xFFFF);
// zhen(0x0FFF,0xFFFB,0xFFFF);
// zhen(0x0FFF,0xFFF7,0xFFFF);
// zhen(0x0FFF,0xFFEF,0xFFFF);
// zhen(0x0FFF,0xFFDF,0xFFFF);
// zhen(0x0FFF,0xFFBF,0xFFFF);
// zhen(0x0FFF,0xFF7F,0xFFFF);
// zhen(0x0FFF,0xFEFF,0xFFFF);
// zhen(0x0FFF,0xFDFF,0xFFFF);
// zhen(0x0FFF,0xFBFF,0xFFFF);
// zhen(0x0FFF,0xF7FF,0xFFFF);
// zhen(0x0FFF,0xEFFF,0xFFFF);
// zhen(0x0FFF,0xDFFF,0xFFFF);
// zhen(0x0FFF,0xBFFF,0xFFFF);
// zhen(0x0FFF,0x7FFF,0xFFFF);
// zhen(0x0FFE,0xFFFF,0xFFFF); 
// zhen(0x0FFD,0xFFFF,0xFFFF);
// zhen(0x0FFB,0xFFFF,0xFFFF); 
// zhen(0x0FF7,0xFFFF,0xFFFF);
// zhen(0x0FEF,0xFFFF,0xFFFF); 
// zhen(0x0FDF,0xFFFF,0xFFFF);
// zhen(0x0FBF,0xFFFF,0xFFFF); 
// zhen(0x0F7F,0xFFFF,0xFFFF);
// zhen(0x0EFF,0xFFFF,0xFFFF); 
// zhen(0x0DFF,0xFFFF,0xFFFF);
// zhen(0x0BFF,0xFFFF,0xFFFF); 
// zhen(0x07FF,0xFFFF,0xFFFF);
//					   













 
  




 }



 
}
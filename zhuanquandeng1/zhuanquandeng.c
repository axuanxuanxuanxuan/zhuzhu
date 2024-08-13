#include <STC15F2K60S2.H>
#include "intrins.h"
#define U8   unsigned char
#define U16  unsigned int
sbit DS=P3^4;
sbit SH=P3^3;
sbit ST=P3^2;
#define U8   unsigned char
#define U16  unsigned int
U16 JS,n;
U8 code Dat[432]={

0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFC,0x00,0x1F,0xFF,0xFF,0xFF,
0xFD,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFD,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFC,0x00,0x3F,0xFF,0xFF,0xFF,
0xFC,0x00,0x7F,0xFF,0xFF,0xFF,
0xFE,0xFD,0xFF,0xFF,0xFF,0xFF,
0xFE,0xFD,0xFB,0xFF,0xFF,0xFF,
0xFE,0xFB,0xF9,0xFF,0xFF,0xFF,
0xC0,0x00,0x03,0xFF,0xFF,0xFF,
0xFE,0xF7,0xFF,0xFF,0xFF,0xFF,
0xFE,0xF7,0xFB,0xFF,0xFF,0xFF,
0xFE,0xEF,0xFB,0xFF,0xFF,0xFF,
0xFE,0xEF,0xFB,0xFF,0xFF,0xFF,
0xFE,0xF0,0xFB,0xFF,0xFF,0xFF,
0xEE,0xFE,0x3B,0xFF,0xFF,0xFF,
0xF0,0xFF,0xFB,0xFF,0xFF,0xFF,
0xFA,0xFF,0x03,0xFF,0xFF,0xFF,
0xFE,0xC0,0xFB,0xFF,0xFF,0xFF,
0xFC,0xCF,0xFB,0xFF,0xFF,0xFF,
0xFE,0xFF,0xFB,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,

0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFC,0x00,0x1F,0xFF,0xFF,0xFF,
0xFD,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFD,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFC,0x00,0x3F,0xFF,0xFF,0xFF,
0xFC,0x00,0x7F,0xFF,0xFF,0xFF,
0xFE,0xFD,0xFF,0xFF,0xFF,0xFF,
0xFE,0xFD,0xFB,0xFF,0xFF,0xFF,
0xFE,0xFB,0xF9,0xFF,0xFF,0xFF,
0xC0,0x00,0x03,0xFF,0xFF,0xFF,
0xFE,0xF7,0xFF,0xFF,0xFF,0xFF,
0xFE,0xF7,0xFB,0xFF,0xFF,0xFF,
0xFE,0xEF,0xFB,0xFF,0xFF,0xFF,
0xFE,0xEF,0xFB,0xFF,0xFF,0xFF,
0xFE,0xF0,0xFB,0xFF,0xFF,0xFF,
0xEE,0xFE,0x3B,0xFF,0xFF,0xFF,
0xF0,0xFF,0xFB,0xFF,0xFF,0xFF,
0xFA,0xFF,0x03,0xFF,0xFF,0xFF,
0xFE,0xC0,0xFB,0xFF,0xFF,0xFF,
0xFC,0xCF,0xFB,0xFF,0xFF,0xFF,
0xFE,0xFF,0xFB,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,

0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFC,0x00,0x1F,0xFF,0xFF,0xFF,
0xFD,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFD,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFC,0x00,0x3F,0xFF,0xFF,0xFF,
0xFC,0x00,0x7F,0xFF,0xFF,0xFF,
0xFE,0xFD,0xFF,0xFF,0xFF,0xFF,
0xFE,0xFD,0xFB,0xFF,0xFF,0xFF,
0xFE,0xFB,0xF9,0xFF,0xFF,0xFF,
0xC0,0x00,0x03,0xFF,0xFF,0xFF,
0xFE,0xF7,0xFF,0xFF,0xFF,0xFF,
0xFE,0xF7,0xFB,0xFF,0xFF,0xFF,
0xFE,0xEF,0xFB,0xFF,0xFF,0xFF,
0xFE,0xEF,0xFB,0xFF,0xFF,0xFF,
0xFE,0xF0,0xFB,0xFF,0xFF,0xFF,
0xEE,0xFE,0x3B,0xFF,0xFF,0xFF,
0xF0,0xFF,0xFB,0xFF,0xFF,0xFF,
0xFA,0xFF,0x03,0xFF,0xFF,0xFF,
0xFE,0xC0,0xFB,0xFF,0xFF,0xFF,
0xFC,0xCF,0xFB,0xFF,0xFF,0xFF,
0xFE,0xFF,0xFB,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,

};


																																			


void send(U8 DA)
{
 for(n=0;n<8;n++)
 {
  DS=DA&0X80;
  

  

  SH=0;SH=1;
  DA<<=1;
 }
}


		
void Timer0Init(void)		//500΢��@24.000MHz
{	EA=1;
	ET0=1;											
	AUXR |= 0x80;		//��ʱ��ʱ��1Tģʽ
	TMOD &= 0xF0;		//���ö�ʱ��ģʽ
	TL0 = 0x20;		//���ö�ʱ��ֵ
	TH0 = 0xD1;		//���ö�ʱ��ֵ
	TF0 = 0;		//���TF0��־
	TR0 = 1;		//��ʱ��0��ʼ��ʱ
}


void main()
{JS=0;
Timer0Init();
while(1);

}
void zhongduan()interrupt	1 
{TL0 = 0x20;
 TH0 = 0xD1;
send(Dat[JS]);send(Dat[JS+1]);send(Dat[JS+2]);send(Dat[JS+3]);send(Dat[JS+4]);send(Dat[JS+5]);
ST=0;ST=1;
JS=JS+6;
if(JS>431)
{JS=0;}
}

  
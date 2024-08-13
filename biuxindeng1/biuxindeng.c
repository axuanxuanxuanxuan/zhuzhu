#include <STC15F2K60S2.H>
#include "intrins.h"
sbit  DS=P3^3;
sbit  ST=P3^4;
sbit  SH=P3^5;
unsigned int s	;
unsigned int n	;
unsigned int l	;
unsigned int f	;
unsigned int p	;
unsigned int q	;
unsigned int o	;
unsigned int x	;
unsigned int v	;
unsigned int k	;


void Delay10ms(unsigned int w	)		//@11.0592MHz
{
	unsigned char i, j;

	i = 108;
	j = 145;
	do
	{
		while (--j);
	} while (--i);
}



void Delay50us()		//@12.000MHz
{
	unsigned char i, j;

	i = 1;
	j = 146;
	do
	{
		while (--j);
	} while (--i);
}

void Delay2000ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 92;
	j = 50;
	k = 238;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

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



void Delay200ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 9;
	j = 104;
	k = 139;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}



void send(unsigned char DA)
{
 for(f=0;f<8;f++)
 {
  DS=DA&0X80;
  SH=0;SH=1;
  DA<<=1;
 }
 }

void xiaoting()
{send(0X00);
 send(0X00);
 ST=0;ST=1;
 Delay100ms();

}




void waiquanliushui()
{for(v=5;v>0;v--)
 {send(0X01);
 send(0XBF);
 ST=0;ST=1;
 Delay10ms(v);//41

 send(0X80);
 send(0XEF);
 ST=0;ST=1;
 Delay10ms(v);//40
 
 send(0X08);
 send(0XFE);
 ST=0;ST=1;
 Delay10ms(v);;//43

 send(0X40);
 send(0XEF);
 ST=0;ST=1;
Delay10ms(v);//44

 send(0X10);
 send(0XF7);
 ST=0;ST=1;
 Delay10ms(v);//45

 send(0X01);
 send(0XF7);
 ST=0;ST=1;
 Delay10ms(v);//46

 send(0X02);
 send(0XF7);
 ST=0;ST=1;
 Delay10ms(v);//47

 send(0X04);
 send(0XF7);
 ST=0;ST=1;
 Delay10ms(v);//48

 send(0X02);
 send(0X7F);
 ST=0;ST=1;
 Delay10ms(v);//49

 send(0X10);
 send(0XEF);
 ST=0;ST=1;
 Delay10ms(v);//50

 send(0X10);
 send(0XFD);
 ST=0;ST=1;
 Delay10ms(v);//51

 send(0X40);
 send(0XFD);
 ST=0;ST=1;
 Delay10ms(v);//52

 send(0X02);
 send(0XFE);
 ST=0;ST=1;
 Delay10ms(v);//53

 send(0X20);
 send(0XFD);
 ST=0;ST=1;
 Delay10ms(v);//37

 send(0X80);
 send(0XFD);
 ST=0;ST=1;
 Delay10ms(v);//55

 send(0X20);
 send(0XF7);
 ST=0;ST=1;
 Delay10ms(v);//56

 send(0X04);
 send(0XFE);
 ST=0;ST=1;
 Delay10ms(v);//57

 send(0X08);
 send(0XF7);
 ST=0;ST=1;
 Delay10ms(v);//58

 send(0X80);
 send(0X7F);
 ST=0;ST=1;
 Delay10ms(v);//59

 send(0X40);
 send(0XFE);
 ST=0;ST=1;
 Delay10ms(v);//60

 send(0X80);
 send(0XF7);
 ST=0;ST=1;
 Delay10ms(v);//61

 send(0X80);
 send(0XDF);
 ST=0;ST=1;
 Delay10ms(v);//62

 send(0X08);
 send(0XFB);
 ST=0;ST=1;
 Delay10ms(v);//63

 send(0X10);
 send(0XFB);
 ST=0;ST=1;
 Delay10ms(v);//64

 send(0X40);
 send(0XDF);
 ST=0;ST=1;
 Delay10ms(v);//42

 send(0X20);
 send(0XFB);
 ST=0;ST=1;
 Delay10ms(v);//39

 send(0X40);
 send(0XF7);
 ST=0;ST=1;
 Delay10ms(v);//38

 send(0X08);
 send(0XBF);
 ST=0;ST=1;
 Delay10ms(v);//54

 send(0X04);
 send(0XDF);
 ST=0;ST=1;
 Delay10ms(v);//36

 send(0X04);
 send(0XFD);
 ST=0;ST=1;
 Delay10ms(v);//35

 send(0X08);
 send(0XDF);
 ST=0;ST=1;
 Delay10ms(v);//34

 send(0X10);
 send(0XDF);
 ST=0;ST=1;
 Delay10ms(v);//33

 send(0X02);
 send(0XDF);
 ST=0;ST=1;
 Delay10ms(v);//32

 send(0X20);
 send(0XDF);
 ST=0;ST=1;
 Delay10ms(v);//31

 send(0X08);
 send(0XFD);
 ST=0;ST=1;
 Delay10ms(v);//30

 send(0X01);
 send(0XFE);
 ST=0;ST=1;
 Delay10ms(v);//29

 send(0X10);
 send(0XBF);
 ST=0;ST=1;
 Delay10ms(v);//28

 send(0X01);
 send(0XEF);
 ST=0;ST=1;
 Delay10ms(v);//27

 send(0X20);
 send(0XFE);
 ST=0;ST=1;
 Delay10ms(v);//26

 send(0X20);
 send(0XEF);
 ST=0;ST=1;
 Delay10ms(v);//25

 send(0X08);
 send(0X7F);
 ST=0;ST=1;
 Delay10ms(v);//24

 send(0X10);
 send(0X7F);
 ST=0;ST=1;
 Delay10ms(v);//23

 send(0X20);
 send(0X7F);
 ST=0;ST=1;
 Delay10ms(v);//22

 send(0X40);
 send(0X7F);
 ST=0;ST=1;
 Delay10ms(v);//21

 send(0X04);
 send(0XBF);
 ST=0;ST=1;
 Delay10ms(v);//20

 send(0X04);
 send(0X7F);
 ST=0;ST=1;
 Delay10ms(v);//19

 send(0X02);
 send(0XBF);
 ST=0;ST=1;
 Delay10ms(v);//18

 send(0X10);
 send(0XFE);
 ST=0;ST=1;
 Delay10ms(v);//17

 xiaoting();
}

}

void waiquanshan()
{ for(x=0;x<5;x++)
 {for(l=0;l<30;l++)
{send(0X01);
 send(0XBF);
 ST=0;ST=1;
 Delay50us();//41

 send(0X80);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();//40
 
 send(0X08);
 send(0XFE);
 ST=0;ST=1;
 Delay50us();//43

 send(0X40);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();//44

 send(0X10);
 send(0XF7);
 ST=0;ST=1;
 Delay50us();//45

 send(0X01);
 send(0XF7);
 ST=0;ST=1;
 Delay50us();//46

 send(0X02);
 send(0XF7);
 ST=0;ST=1;
 Delay50us();//47

 send(0X04);
 send(0XF7);
 ST=0;ST=1;
 Delay50us();//48

 send(0X02);
 send(0X7F);
 ST=0;ST=1;
 Delay50us();//49

 send(0X10);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();//50

 send(0X10);
 send(0XFD);
 ST=0;ST=1;
 Delay50us();//51

 send(0X40);
 send(0XFD);
 ST=0;ST=1;
 Delay50us();//52

 send(0X02);
 send(0XFE);
 ST=0;ST=1;
 Delay50us();//53

 send(0X20);
 send(0XFD);
 ST=0;ST=1;
 Delay50us();//37

 send(0X80);
 send(0XFD);
 ST=0;ST=1;
 Delay50us();//55

 send(0X20);
 send(0XF7);
 ST=0;ST=1;
 Delay50us();//56

 send(0X04);
 send(0XFE);
 ST=0;ST=1;
 Delay50us();//57

 send(0X08);
 send(0XF7);
 ST=0;ST=1;
 Delay50us();//58

 send(0X80);
 send(0X7F);
 ST=0;ST=1;
 Delay50us();//59

 send(0X40);
 send(0XFE);
 ST=0;ST=1;
 Delay50us();//60

 send(0X80);
 send(0XF7);
 ST=0;ST=1;
 Delay50us();//61

 send(0X80);
 send(0XDF);
 ST=0;ST=1;
 Delay50us();//62

 send(0X08);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();//63

 send(0X10);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();//64

 send(0X40);
 send(0XDF);
 ST=0;ST=1;
 Delay50us();//42

 send(0X20);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();//39

 send(0X40);
 send(0XF7);
 ST=0;ST=1;
 Delay50us();//38

 send(0X08);
 send(0XBF);
 ST=0;ST=1;
 Delay50us();//54

 send(0X04);
 send(0XDF);
 ST=0;ST=1;
 Delay50us();//36

 send(0X04);
 send(0XFD);
 ST=0;ST=1;
 Delay50us();//35

 send(0X08);
 send(0XDF);
 ST=0;ST=1;
 Delay50us();//34

 send(0X10);
 send(0XDF);
 ST=0;ST=1;
 Delay50us();//33

 send(0X02);
 send(0XDF);
 ST=0;ST=1;
 Delay50us();//32

 send(0X20);
 send(0XDF);
 ST=0;ST=1;
 Delay50us();//31

 send(0X08);
 send(0XFD);
 ST=0;ST=1;
 Delay50us();//30

 send(0X01);
 send(0XFE);
 ST=0;ST=1;
 Delay50us();//29

 send(0X10);
 send(0XBF);
 ST=0;ST=1;
 Delay50us();//28

 send(0X01);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();//27

 send(0X20);
 send(0XFE);
 ST=0;ST=1;
 Delay50us();//26

 send(0X20);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();//25

 send(0X08);
 send(0X7F);
 ST=0;ST=1;
 Delay50us();//24

 send(0X10);
 send(0X7F);
 ST=0;ST=1;
 Delay50us();//23

 send(0X20);
 send(0X7F);
 ST=0;ST=1;
 Delay50us();//22

 send(0X40);
 send(0X7F);
 ST=0;ST=1;
 Delay50us();//21

 send(0X04);
 send(0XBF);
 ST=0;ST=1;
 Delay50us();//20

 send(0X04);
 send(0X7F);
 ST=0;ST=1;
 Delay50us();//19

 send(0X02);
 send(0XBF);
 ST=0;ST=1;
 Delay50us();//18

 send(0X10);
 send(0XFE);
 ST=0;ST=1;
 Delay50us();//17
 }
 send(0X00);
 send(0X00);
 ST=0;ST=1;
 Delay50us();
 Delay200ms();
}
}

void yanzuishan()
{ for(q=0;q<6;q++)
 {

 for(p=0;p<50;p++)
{send(0X01);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();

 send(0X02);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();

 send(0X04);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();

 send(0X01);
 send(0XDF);
 ST=0;ST=1;
 Delay50us();
 }
 
 send(0X00);
 send(0X00);
 ST=0;ST=1;
 Delay100ms();
 
 
 
 }
 Delay100ms();
 }

 







void biu()
{for(o=0;o<800;o++)
 {
 send(0X08);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();
 
 send(0X20);
 send(0XBF);
 ST=0;ST=1;
 Delay50us();

 send(0X80);
 send(0XFE);
 ST=0;ST=1;
 Delay50us();

 send(0X02);
 send(0XFD);
 ST=0;ST=1;
 Delay50us();

 send(0X02);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();
 }
  
  for(o=0;o<500;o++)
 {
 send(0X08);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();
 
 send(0X20);
 send(0XBF);
 ST=0;ST=1;
 Delay50us();

 send(0X80);
 send(0XFE);
 ST=0;ST=1;
 Delay50us();

 send(0X02);
 send(0XFD);
 ST=0;ST=1;
 Delay50us();

 send(0X02);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();

 send(0X04);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();

 send(0X80);
 send(0XBF);
 ST=0;ST=1;
 Delay50us();
}
 
 for(o=0;o<300;o++)
 {
 send(0X08);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();
 
 send(0X20);
 send(0XBF);
 ST=0;ST=1;
 Delay50us();

 send(0X80);
 send(0XFE);
 ST=0;ST=1;
 Delay50us();

 send(0X02);
 send(0XFD);
 ST=0;ST=1;
 Delay50us();

 send(0X02);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();

 send(0X04);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();

 send(0X80);
 send(0XBF);
 ST=0;ST=1;
 Delay50us();



 send(0X01);
 send(0X7F);
 ST=0;ST=1;
 Delay50us();

 send(0X80);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();

 send(0X01);
 send(0XFD);
 ST=0;ST=1;
 Delay50us();

 send(0X40);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();

 send(0X40);
 send(0XBF);
 ST=0;ST=1;
 Delay50us();





}

 







 
}


 void ting()
{send(0X00);
 send(0X00);
 ST=0;ST=1;
 Delay2000ms();

}


void quanliang()
{send(0XFF);
 send(0X00);
 ST=0;ST=1;
 Delay2000ms();
}


void mie()
{ 
 for(k=0;k<500;k++)
 {

  send(0X01);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();

 send(0X02);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();

 send(0X04);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();

 send(0X01);
 send(0XDF);
 ST=0;ST=1;
 Delay50us();

 send(0X08);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();
 
 send(0X20);
 send(0XBF);
 ST=0;ST=1;
 Delay50us();

 send(0X80);
 send(0XFE);
 ST=0;ST=1;
 Delay50us();

 send(0X02);
 send(0XFD);
 ST=0;ST=1;
 Delay50us();

 send(0X02);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();

 send(0X04);
 send(0XEF);
 ST=0;ST=1;
 Delay50us();

 send(0X80);
 send(0XBF);
 ST=0;ST=1;
 Delay50us();



 send(0X01);
 send(0X7F);
 ST=0;ST=1;
 Delay50us();

 send(0X80);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();

 send(0X01);
 send(0XFD);
 ST=0;ST=1;
 Delay50us();

 send(0X40);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();

 send(0X40);
 send(0XBF);
 ST=0;ST=1;
 Delay50us();






}
 for(o=0;o<1000;o++)
 {

 send(0X01);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();

 send(0X02);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();

 send(0X04);
 send(0XFB);
 ST=0;ST=1;
 Delay50us();

 send(0X01);
 send(0XDF);
 ST=0;ST=1;
 Delay50us();





 }




}



void main()
{P3M0=0;P3M1=0;
 P5M0=0;P5M1=0;
 while(1)
 {waiquanliushui();
  waiquanshan();
  xiaoting();
  yanzuishan();
  xiaoting();
  biu();
  xiaoting();
  
  mie();
  ting();
  
  




 }
}



#include "SYS.h"
#include "PIC.h"
#include "IIC.C"

void pic13(void)
{
	Uchar i,j;
	Uint k;
	k=0;
	for(j=4;j<8;j++)
	{
		Write_Command3(0x22);//--set page1
		Write_Command3(j);//--set start page
		Write_Command3(0x07);//--set end page

 		for(i=0;i<128;i++)		  				//显示单色数据到LCD
		{
			Write_Data3(color13[k]);
			k=k+1;

		}
	}
}

void Disp(uchar X_st,uchar Y_st,uint num)
{
			Uchar i,j;
	for(j=0;j<2;j++)
		{
			Write_Command3(0x22);//--set page1
			Write_Command3(Y_st+j);//--set start page
			Write_Command3(0x07);//--set end page
			for(i=0;i<X_st;i++)
					{	Write_Data3(0x00);}
			for(i=0;i<8;i++)		  				
					{	Write_Data3(suzi[(num/10000)%10][i+8*j]);}	//显示单色数据到LCD
			for(i=0;i<8;i++)		  				
					{	Write_Data3(suzi[(num/1000)%10][i+8*j]);}	//显示单色数据到LCD
			for(i=0;i<8;i++)		  				
					{	Write_Data3(suzi[(num/100)%10][i+8*j]);}	//显示单色数据到LCD
			for(i=0;i<8;i++)		  				
					{	Write_Data3(suzi[(num/10)%10][i+8*j]);}		//显示单色数据到LCD
			for(i=0;i<8;i++)		  				
					{	Write_Data3(suzi[num%10][i+8*j]);}					//显示单色数据到LCD
			for(i=X_st+40;i<128;i++)
					{	Write_Data3(0x00);}			
		}
}


//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
void main()
{
  EAXFR = 1;		//使能XFR访问
	CKCON = 0;		//设置外部数据总线速度最快
	WTST = 0;			//设置程序读取等待时间为0个时钟，CPU执行程序速度最快
	P2M0=0x00; P2M1=0x00;
	LCD_Init3();
pic13();
	while(1)
	{  uint i; 
		for(i=0;i<20000;i++)
		Disp(40,1,i);
		delay_ms(10);
	}
}

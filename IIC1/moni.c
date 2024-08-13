#include "SYS.h"
#include "PIC.h"
#include "IIC.C"

void pic13(void)
{
	Uchar i,j;
	Uint k;
	k=0;
	for(j=0;j<4;j++)
	{
	OLED_SetCursor(j,0);
//		Write_Command3(0x22);//--set page1
//		Write_Command3(j);//--set start page
//		Write_Command3(0x07);//--set end page

 		for(i=0;i<32;i++)		  				//显示单色数据到LCD
		{
			Write_Data3(color13[k]);
			k=k+1;

		}


		}

		for(j=0;j<4;j++)
	{
	OLED_SetCursor(j,32);
//		Write_Command3(0x22);//--set page1
//		Write_Command3(j);//--set start page
//		Write_Command3(0x07);//--set end page

 		for(i=0;i<32;i++)		  				//显示单色数据到LCD
		{
			Write_Data3(color13[k]);
			k=k+1;

		}

		}


		for(j=0;j<4;j++)
	{
	OLED_SetCursor(j,64);
//		Write_Command3(0x22);//--set page1
//		Write_Command3(j);//--set start page
//		Write_Command3(0x07);//--set end page

 		for(i=0;i<32;i++)		  				//显示单色数据到LCD
		{
			Write_Data3(color13[k]);
			k=k+1;

		}

		 }

		for(j=0;j<4;j++)
	{
	OLED_SetCursor(j,96);
//		Write_Command3(0x22);//--set page1
//		Write_Command3(j);//--set start page
//		Write_Command3(0x07);//--set end page

 		for(i=0;i<32;i++)		  				//显示单色数据到LCD
		{
			Write_Data3(color13[k]);
			k=k+1;

		}
		}


		for(j=4;j<8;j++)
	{
	OLED_SetCursor(j,0);

 		for(i=0;i<32;i++)		  			
		{
			Write_Data3(color13[k]);
			k=k+1;

		}

		}

		for(j=4;j<8;j++)  
	{
	OLED_SetCursor(j,32);
//		Write_Command3(0x22);//--set page1
//		Write_Command3(j);//--set start page
//		Write_Command3(0x07);//--set end page

 		for(i=0;i<32;i++)		  				//显示单色数据到LCD
		{
			Write_Data3(color13[k]);
			k=k+1;

		}

		}


		for(j=4;j<8;j++)
	{
	OLED_SetCursor(j,64);
//		Write_Command3(0x22);//--set page1
//		Write_Command3(j);//--set start page
//		Write_Command3(0x07);//--set end page

 		for(i=0;i<32;i++)		  				//显示单色数据到LCD
		{
			Write_Data3(color13[k]);
			k=k+1;

		}

		}

		for(j=4;j<8;j++)
	{
	OLED_SetCursor(j,96);
 		for(i=0;i<32;i++)		  				
		{
			Write_Data3(color13[k]);
			k=k+1;
		 }
		}
	}


//void Disp(uchar X_st,uchar Y_st,uint num)
//{
//			Uchar i,j;
//	for(j=0;j<2;j++)
//		{
//			Write_Command3(0x22);//--set page1
//			Write_Command3(Y_st+j);//--set start page
//			Write_Command3(0x07);//--set end page
//			for(i=0;i<X_st;i++)
//					{	Write_Data3(0x00);}
//			for(i=0;i<8;i++)		  				
//					{	Write_Data3(suzi[(num/10000)%10][i+8*j]);}	//显示单色数据到LCD
//			for(i=0;i<8;i++)		  				
//					{	Write_Data3(suzi[(num/1000)%10][i+8*j]);}	//显示单色数据到LCD
//			for(i=0;i<8;i++)		  				
//					{	Write_Data3(suzi[(num/100)%10][i+8*j]);}	//显示单色数据到LCD
//			for(i=0;i<8;i++)		  				
//					{	Write_Data3(suzi[(num/10)%10][i+8*j]);}		//显示单色数据到LCD
//			for(i=0;i<8;i++)		  				
//					{	Write_Data3(suzi[num%10][i+8*j]);}					//显示单色数据到LCD
//			for(i=X_st+40;i<128;i++)
//					{	Write_Data3(0x00);}			
//		}
//}


//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
void main()
{
	P1M0=0x00; P1M1=0x00;
	P_SW2=0X80;
  	I2CCFG=0xC0;
	LCD_Init3();

	pic13();







//	while(1)
//	{  uint i; 
//		for(i=0;i<20000;i++)
//		Disp(40,1,i);
//		delay_ms(10);
//	}
}

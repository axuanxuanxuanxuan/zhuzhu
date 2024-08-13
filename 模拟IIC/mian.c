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

 		for(i=0;i<128;i++)		  				//��ʾ��ɫ���ݵ�LCD
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
					{	Write_Data3(suzi[(num/10000)%10][i+8*j]);}	//��ʾ��ɫ���ݵ�LCD
			for(i=0;i<8;i++)		  				
					{	Write_Data3(suzi[(num/1000)%10][i+8*j]);}	//��ʾ��ɫ���ݵ�LCD
			for(i=0;i<8;i++)		  				
					{	Write_Data3(suzi[(num/100)%10][i+8*j]);}	//��ʾ��ɫ���ݵ�LCD
			for(i=0;i<8;i++)		  				
					{	Write_Data3(suzi[(num/10)%10][i+8*j]);}		//��ʾ��ɫ���ݵ�LCD
			for(i=0;i<8;i++)		  				
					{	Write_Data3(suzi[num%10][i+8*j]);}					//��ʾ��ɫ���ݵ�LCD
			for(i=X_st+40;i<128;i++)
					{	Write_Data3(0x00);}			
		}
}


//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
void main()
{
  EAXFR = 1;		//ʹ��XFR����
	CKCON = 0;		//�����ⲿ���������ٶ����
	WTST = 0;			//���ó����ȡ�ȴ�ʱ��Ϊ0��ʱ�ӣ�CPUִ�г����ٶ����
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

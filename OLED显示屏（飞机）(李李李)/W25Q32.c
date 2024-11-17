#include "W25Q32.H"
#include "PIC.H"
//sbit LED=P3^2;
u8 temp_dat[500];
//void Delay1ms(u16 ms)                //注：ms_max=65536//STC32
//{
//				unsigned int i;
//				do
//	{
//		i=MAIN_Fosc/6030;                        
//		while(--i)        ;
//	 }
//				while(--ms);
//}

void Write_En()
	{
	CS=0;
	SPI_WriteByte(Write_Enable);
	CS=1;
	}

//void SPI_Write(long add,u8 dat) //对一个地址写一个字节
//{
//		while(Status());
//	  Write_En();
//		CS=0;
//		SPI_WriteByte(Page_Program);
//	  SPI_WriteByte((u8)(add>>16));		SPI_WriteByte((u8)(add>>8));		SPI_WriteByte((u8)add);
//    SPI_WriteByte(dat);
//		CS=1;
//		while(Status());
//}
u8 SPI_read(long add)						//对一个地址读一个字节
{
		u8 dat;
		CS=0;
		SPI_WriteByte(Read_Data);
	  SPI_WriteByte((u8)(add>>16));	SPI_WriteByte((u8)(add>>8));	SPI_WriteByte((u8)(add));
		dat=SPI_ReadByte();
	  CS=1;
	  return(dat);
}
bit Status()								//读状态
{
	CS=0;
	SPI_WriteByte(Read_Status);
	if(SPI_ReadByte()&0x01)
		{CS=1;return (1);}
	else
		{CS=1;return (0);}
}

void Chip_Write(u16 star_add,u8 *dat,long num)//star_add起始地址最大0X7FFFF  u8 dat, 上传数据 long num总个数
{
	u16 addh,addm,addl=0;
	long js=0;
//	LED=0;
		for(addh=star_add>>8;addh<128;addh++)
		{
			addm=0;	
			for(addm=star_add&0x00FF;addm<256;addm++)
					{
						addl=0;
						Write_En();
						CS=0;
						SPI_WriteByte(Page_Program);
						SPI_WriteByte((u8)(addh));	SPI_WriteByte((u8)(addm));	SPI_WriteByte((u8)(addl));
						
						for(addl=0;addl<256;addl++)
							{
							 if(js<num)
								 {
								 SPI_WriteByte(*dat++);
								 js++;	
								 }
							 else
							   {
									CS=1;	
//									LED=1;
									js=0;
									return; 
							   }
//						 
							}
						CS=1;
						while(Status());	
//  					LED=1;
					}
			}		
}
//void batch_read(long add,u16 num)						//对一个地址add读num个字节
//{
//		u16 i;
//		CS=0;
//		SPI_WriteByte(Read_Data);
//	  SPI_WriteByte((u8)(add>>16));	SPI_WriteByte((u8)(add>>8));	SPI_WriteByte((u8)(add));
//	  for(i=0;i<num;i++)
//			{
//				SBUF=SPI_ReadByte();while(TI);Delay1ms(2);//temp_dat[i]

//			}
//	  CS=1;
//}




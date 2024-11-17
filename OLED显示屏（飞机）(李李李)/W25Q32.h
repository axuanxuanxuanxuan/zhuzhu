#ifndef	W25Q32_H
#define	W25Q32_H

sbit CS=P3^5;

#define Write_Enable 0x06//Ð´Ê¹ÄÜ
#define Read_Status 0x05//¶Á×´Ì¬
#define Page_Program 0x02//Ò³±à³Ì
#define Block_Erase64 0xD8 //¿é²Á³ý£¨64K£©
#define Block_Erase32 0x52 //¿é²Á³ý£¨32K£©
#define Sector_Erase04 0x20//ÉÈÇø²Á³ý
#define Chip_Erase 0x60  //È«Æ¬²Á³ý
#define Read_Data 0x03  //¶ÁÊý¾Ý 
#define u8 unsigned char
#define u16 unsigned int

void Write_En();
u8 SPI_read(long add);
bit Status();

void SPI_Write(long add,u8 dat);
void	SPI_SetMode(u8 mode);
void Chip_Write(u16 star_add,u8 *dat,long num);
#endif

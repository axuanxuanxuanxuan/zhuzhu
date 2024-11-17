#ifndef	W25Q32_H
#define	W25Q32_H

sbit CS=P3^5;

#define Write_Enable 0x06//дʹ��
#define Read_Status 0x05//��״̬
#define Page_Program 0x02//ҳ���
#define Block_Erase64 0xD8 //�������64K��
#define Block_Erase32 0x52 //�������32K��
#define Sector_Erase04 0x20//��������
#define Chip_Erase 0x60  //ȫƬ����
#define Read_Data 0x03  //������ 
#define u8 unsigned char
#define u16 unsigned int

void Write_En();
u8 SPI_read(long add);
bit Status();

void SPI_Write(long add,u8 dat);
void	SPI_SetMode(u8 mode);
void Chip_Write(u16 star_add,u8 *dat,long num);
#endif

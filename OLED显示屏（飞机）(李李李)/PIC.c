#include "PIC.H"

void SPI_Init()
{
 SPCTL=0XDC;
 SPSTAT=0XC0;
}

void SPI_WriteByte(uchar Data)
{
 SPDAT=Data;
 while((SPSTAT&0X80)==0);
 SPSTAT=0XC0;
}

uchar SPI_ReadByte()
{
 SPDAT=0XFF;
 while((SPSTAT&0X80)==0);
 SPSTAT=0XC0;
 return SPDAT;
}


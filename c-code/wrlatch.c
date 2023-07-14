/*******************************************************
Project :   Function WRLATCH 
Version :       1
Date    :
Author  :  Sri Krishna Govind Anandarao and Shardul Shrikhande
*******************************************************/
#include <delay.h>
#include <mega2560.h>
void wrlatch(char eightbitvalue) // function prototype to drive WRLATCH output with 8-bit value
{
      //address ob01011
   // Port L initialization
DDRL=(1<<DDL7) | (1<<DDL6) | (1<<DDL5) | (1<<DDL4) | (1<<DDL3) | (1<<DDL2) | (1<<DDL1) | (1<<DDL0);

   PORTK=0x36;
   PORTL=eightbitvalue;     
   delay_us(2);
   PORTK=0x16;
   delay_us(2);
   PORTK=0x36; 
   
}



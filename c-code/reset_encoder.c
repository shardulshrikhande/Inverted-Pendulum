/*******************************************************
Project :   Function reset enc
Version :       1
Author  :  Sri Krishna Govind Anandarao and Shardul Shrikhande
*******************************************************/
#include<mega2560.h>
#include<delay.h>
void reset_encoder() // code for resetting the encoder value
{
 PORTK=0x24;
 delay_us(2);
 PORTK=0x04;
 delay_us(2);
 
 PORTK=0x25;
 delay_us(2);
 PORTK=0x05;
 delay_us(2);

}
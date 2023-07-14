/*******************************************************
Project :   Function encoder DA
Version :       1
Date    : 10/19/2022
Author  :  Sri Krishna Govind Anandarao and Shardul Shrikhande
*******************************************************/
#include<mega2560.h>
#include<delay.h>

unsigned int encoder_DA(char enc_channel)//function that takes in an encoder channel number, reads the value from the correct encoder channel and returns the full encoder count 
{
	unsigned int count_value;
	char value,value1; 
      switch(enc_channel)
      {
      case 0:
      {
          
		    
          DDRL=0x00; 
          PORTK=0x06;                //sets the address to the first encoder
          delay_us(2);                      
          value=PINL;				// reads the upper 4 of the 12-bit encoder's value
          PORTK=0x26;               //sets the address to the first encoder with gate bit set
		  
		  DDRL=0x00;
		  PORTK=0x07;
		  delay_us(2);
		  value1=PINL;				// reads the subsequent lower 8 bits of the 12-bit encoder's value
		  PORTK=0x27;        
          
		  count_value= (((signed int) value)<<8 ) + value1 ;
		  
		  return count_value;
      
      }break;
      
      case 1:
      {    
		  DDRL=0x00;
		  PORTK=0x08;
		  delay_us(2);
		  value=PINL;
		  PORTK=0x28;
		  
		  DDRL=0x00;
		  PORTK=0x09;
		  delay_us(2);
		  value1=PINL;
		  PORTK=0x29;
		  
		  count_value= (((signed int) value)<<8 ) + value1 ;
		  
		  return count_value;
      
      
      }break;
        
     case 2:
      {  
		   DDRL=0x00;
		   PORTK=0x0A;
		   delay_us(2);
		   value=PINL;
		   PORTK=0x2A;
		   
		   DDRL=0x00;
		   PORTK=0x0B;
		   delay_us(2);
		   value1=PINL;
		   PORTK=0x2B;
		   
		   count_value= (((signed int) value)<<8 ) + value1 ;
		   
		   return count_value;
		         
      
      }break;    
         
     default: //invalid channel
     return 0;      
      
      

     }

}

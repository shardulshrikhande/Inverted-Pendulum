/*******************************************************
Project :   Function write DA
Version :       
Author  :  Sri Krishna Govind Anandarao and Shardul Shrikhande
*******************************************************/
#include <mega2560.h>
#include <delay.h>
char  write_DA(char channel, unsigned char value)    // This function has two input parameters channel number and value to load D/A
{
      switch(channel)
      {
      case 0:
      
          PORTK=0x20;                       // address of D/A channel gate signal high 
          DDRL=0xFF;                        // the data bus PORT as an output
          PORTL=value;                      // the output value on the data bus PORT
          delay_us(2);                      // Wait for the data bus to stabilize delay 
          PORTK=0x00;                       // Clear the decoder gate signal (enables decoder) 
          delay_us(2);                      // Wait for the decoder output to propagate to D/A chip 
          PORTK=0x20;                       // Set the gate signal to disable the decoder chip
          
      
      break;
      
      case 1:
         
          PORTK=0x21;
          DDRL=0xFF;
          PORTL=value;
          delay_us(2); 
          PORTK=0x01;
          delay_us(2);
          PORTK=0x21;
          
      
      
      break;
        
     case 2:
         
          PORTK=0x22;
          DDRL=0xFF;
          PORTL=value;
          delay_us(2); 
          PORTK=0x02;
          delay_us(2);
          PORTK=0x22;
      
      
      break;
        
      
      case 3:                        // AVR Development Board 7 has issue with the port
          
          PORTK=0x23;
          DDRL=0xFF;
          PORTL=value;
          delay_us(2); 
          PORTK=0x03;
          delay_us(2);
          PORTK=0x23;
     
      
      
      break;
      
         
     default:
     return 0;      
      
      

     }

}
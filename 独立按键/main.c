#include <REGX52.H>
#include "bstv51.h"

void Delay(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
    
    while(xms --)
    {
        i = 2;
        j = 239;
        do
        {
            while (--j);
        } while (--i);
    }
}


void main()
{
    unsigned char LEDNum = 0;
    
    P1 = ~0x01;
    while(1)
    {
        //当按下开关 K1
        if(P3_4 == 0)
        {
            //按键按下时的抖动
            Delay(20);
            //手还没松开
            while(P3_4 == 0);
            //松手之后按键也会抖动
            Delay(20);
            
            //0000 0000
            //0000 0001 -> 1111 1110
            //0000 0010 -> 1111 1101
            //0000 0011 -> 1111 1100
            //0000 0100 -> 1111 1011
            //......
            
            /* 
                LEDNum ++;
                P1 =~LEDNum; 
            */
            
            LEDNum ++;
            if(LEDNum >= 8)
            {
                LEDNum = 0;
            }
            
            P1 = ~(0x01 << LEDNum);
        }
        
        if(P3_5 == 0)
        {
            //按键按下时的抖动
            Delay(20);
            //手还没松开
            while(P3_5 == 0);
            //松手之后按键也会抖动
            Delay(20);
            
            //0000 0000
            //0000 0001 -> 1111 1110
            //0000 0010 -> 1111 1101
            //0000 0011 -> 1111 1100
            //0000 0100 -> 1111 1011
            //......
            
            /* 
                LEDNum ++;
                P1 =~LEDNum; 
            */
            
            if(LEDNum == 0)
            {
                LEDNum = 7;
            }
            else
                LEDNum --;
            
            P1 = ~(0x01 << LEDNum);
        }
        
    }
}
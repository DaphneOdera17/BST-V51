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
        //�����¿��� K1
        if(P3_4 == 0)
        {
            //��������ʱ�Ķ���
            Delay(20);
            //�ֻ�û�ɿ�
            while(P3_4 == 0);
            //����֮�󰴼�Ҳ�ᶶ��
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
            //��������ʱ�Ķ���
            Delay(20);
            //�ֻ�û�ɿ�
            while(P3_5 == 0);
            //����֮�󰴼�Ҳ�ᶶ��
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
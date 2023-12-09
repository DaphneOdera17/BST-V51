#include <REGX52.H>

void Delayms(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;

    while(xms)
    {
        i = 2;
        j = 239;
        do
        {
            while (--j);
        } while (--i);
        xms --;
    }
}


void main()
{
    while(1)
    {
        int i;
        for(i = 0; i < 8; i ++)
        {
            P1 = 0xFF << (1 << i);
            Delayms(500);
        }
    }
}
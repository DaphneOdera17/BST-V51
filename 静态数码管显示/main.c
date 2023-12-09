#include <REGX52.H>
#include "bstv51.h"

sbit DUAN = P2^6;
sbit WEI = P2^7;

void main()
{
    bstv51_init();
    
    P0 = 0x7c;
    DUAN = 1;
    DUAN = 0;
    
    P0 = 0x00; //1111 1110
    WEI = 1;
    WEI = 0;
}
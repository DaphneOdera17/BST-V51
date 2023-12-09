/*
#include <reg52.h>

#define duan P0

sbit wei1 = P2^4; //�����һλ�����
sbit wei2 = P2^5; //����ڶ�λ�����
sbit wei3 = P2^6; //�������λ�����
sbit wei4 = P2^7; //�������λ�����

//����������������
//0:0x3f, 1:0x06, 2:0x5b, 3:0x4f, 4:0x66, 5:0x6d
//6:0x7d, 7:0x07, 8:0x7f, 9:0x6f, A:0x77, B:0x7c
//C:0x39, D:0x5e, E:0x79, F:0x71, ����ʾ:0x00

void main()
{   
    wei1 = 1;
    wei2 = 0;
    wei3 = 0;
    wei4 = 0;
    
    duan = 0x7c; //0111 1100 'b'
    while(1);
}
*/

#include <REGX52.H>
#include "bstv51.h"

sbit DUAN = P2^6;
sbit WEI = P2^7;

void main()
{
    bstv51_init();
    
    P0 = 0x7d; //1111 1110
    DUAN = 1;
    DUAN = 0;
    
    P0 = 0xfd; //1111 1101
    WEI = 1;
    WEI = 0;
    //ʹ�������ҵڶ���������� 6
    
    //ȫ�� b
    /*
    
    P0 = 0x7c; //1111 1110
    DUAN = 1;
    DUAN = 0;
    
    P0 = 0x00; //1111 1101
    WEI = 1;
    WEI = 0;
    
    */
}
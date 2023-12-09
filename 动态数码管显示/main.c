#include<REGX52.H>

sbit DUAN = P2^6;
sbit WEI = P2^7;

unsigned code sz[17] = { 0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d,
                       0x7d, 0x07, 0x7f, 0x6f, 0x77, 0x7c,
                       0x39, 0x5e, 0x79, 0x71, 0x00
};

void delay(unsigned int xms)
{
    unsigned int i, j;
    for(i = xms; i > 0; i --)
        for(j = 112; j > 0; j --);
}

void main()
{
    while(1)
    {
        P0 = sz[1]; //数字 1
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0xfe; //1111 1110
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[2]; //数字 2
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0xfd; //1111 1101
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[3]; //数字 3
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0xfb; //1111 1100
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[4]; //数字 4
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0xf7; //1111 1011
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[5]; //数字 5
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0xef; //1110 1111
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[6]; //数字 6
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0xdf; //1101 1111
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[7]; //数字 7
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0xbf; //1011 1111
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[8]; //数字 8
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0x7f; //0111 1111
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[8]; //数字 8
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0x7f; //0111 1111
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[7]; //数字 7
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0xbf; //1011 1111
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[6]; //数字 6
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0xdf; //1101 1111
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[5]; //数字 5
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0xef; //1110 1111
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[4]; //数字 4
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0xf7; //1111 1011
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[3]; //数字 3
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0xfb; //1111 1100
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[2]; //数字 2
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0xfd; //1111 1101
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
        
        P0 = sz[1]; //数字 1
        DUAN = 1; //一端上电
        DUAN = 0; //断开
        P0 = 0xfe; //1111 1110
        WEI = 1; //另一端上高电平
        WEI = 0; //另一端断开
        delay(200);
    }
}
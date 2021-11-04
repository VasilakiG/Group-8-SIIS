#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kwh;
    scanf("%f", &kwh);
    float smetka = 0;
    if(kwh <= 500)
    {
        smetka += kwh * 5;
    }
    else if(kwh > 500 && kwh <= 650)
    {
        smetka += 500*5;
        kwh -= 500;
        smetka += kwh * 7.5;
    }
    else if(kwh > 650 && kwh <= 850)
    {
        smetka += 500*5 + 150*7.5;
        kwh -= 650;
        smetka += kwh * 11;
    }
    else if(kwh > 850)
    {
        smetka += 500*5 + 150*7.5 + 200*11;
        kwh -= 850;
        smetka += kwh * 13.5;
    }

    if(smetka <= 7000) printf("%.2f", smetka*1.10);
    else printf("%.2f", smetka*1.18);
}

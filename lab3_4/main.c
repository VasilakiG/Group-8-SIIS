#include <stdio.h>
#include <stdlib.h>

float max (float a, float b)
{
    if()
}

int main()
{
    int date;
    scanf("%d", &date);
    int user = date/100000*100 + date/1000%100*1000 + date%1000+1000;
    if(user < 10000)
    {
        if(date%100 <= 60)
        {
            user += 70000;
        }
        else if(date%100 >= 61 && date%100 <= 80)
        {
            user += 80000;
        }
        else if(date%100 >= 81 && date%100 <= 99)
        {
            user += 90000;
        }
    }
    printf("%d", user);
    return 0;
}

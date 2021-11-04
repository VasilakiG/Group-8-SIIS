#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, obraten = 0, sum = 0, proi = 1;
    scanf("%d", &n);
    if(n >= 100000 && n < 10000000)
    {
        for(int i=0; i < 7; i++, n/=10)
        {
            sum += n%10;
            proi *= n%10;
            obraten = obraten * 10 + n%10;
        }

        for(int i=0; i < 7; i++, obraten/=10)
        {
            printf("%d\n", obraten%10);
        }
        printf("%d\n%d", sum, proi);
    }
    else printf("Vneseniot broj ne e 7 cifren!");
    return 0;
}

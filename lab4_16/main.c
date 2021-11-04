#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, obraten = 0, br = 0;
    scanf("%d%d", &m, &n);

    for(int i = m; i <= n; i++)
    {
        obraten = 0;
        for(int j = i; j > 0; j /= 10)
        {
            obraten *= 10;
            obraten += j % 10;
        }
        if(obraten + i <= i*2)
        {
            printf("%d\n", i);
            br++;
        }
    }

    printf("Vkupno: %d", br);
    return 0;
}

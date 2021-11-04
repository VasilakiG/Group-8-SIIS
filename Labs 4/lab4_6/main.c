#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, cena = 0, maxZbir = 0, zbir = 0;
    char tipDanok=0;
    float povrat = 0, maxPovrat = 0;
    scanf("%d", &m);

    for(int i = 0; i < m; i++)
    {
        scanf("%d", &n);
        povrat = zbir = 0;
        for(int j = 0; j < n; j++)
        {
            scanf("%d %c", &cena, &tipDanok);
            if(tipDanok == 'A')
            {
                povrat += cena * 0.18 * 0.15;
            }
            else if(tipDanok == 'B')
            {
                povrat += cena * 0.05 * 0.15;
            }
            zbir += cena;
        }

        if(zbir > 30000)
        {
            printf("Sum %d is bigger than 30000\n", zbir);
        }
        else
        {
            if(povrat > maxPovrat)
            {
                maxPovrat = povrat;
                maxZbir = zbir;
            }
            printf("Total tax return is: %.2f\n", povrat);
        }
    }
    printf("Max amount of reciept: %d. Max tax return for reciepts: %.2f", maxZbir, maxPovrat);
    return 0;
}

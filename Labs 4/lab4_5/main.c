#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char tipDanok=0;
    float povrat=0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int cena;
        scanf("%d %c", &cena, &tipDanok);
        if(tipDanok == 'A')
        {
            povrat += cena * 0.18 * 0.15;
        }
        else if(tipDanok == 'B')
        {
            povrat += cena * 0.05 * 0.15;
        }
    }
    printf("Total tax return is: %.2f", povrat);
    return 0;
}

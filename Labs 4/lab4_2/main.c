#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, p, zbir = 0, brB = 0, ima = 0;
    scanf("%d%d", &a, &p);

    for(int i = a; i > 0; i--)
    {
        zbir = 0;
        for(int j = i; j > 0; j /= 10)
        {
            zbir += j % 10;
        }

        if(brB < 5 && zbir/(float)i*100 == p)
        {
            brB++;
            printf("%d\n", i);
            ima = 1;
        }
    }

    if(!ima)
    {
        printf("NEMA");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[1000];
    int i;
    for(i = 0; ; i++)
    {
        if(scanf("%d", &n[i])) ;
        else
            break;
    }

    int kont = 0, j, nCopy, vc = -1;

    for(j = 0; j < i; j++)
    {
        nCopy=n[j];
        kont=0;
        for(int k = 0; n[j]/10 > 0 && nCopy >= 10; k++, n[j]/=10)
        {
            kont = 0;
            int pb = n[j] % 10;
            int vb = n[j] / 10 % 10;
            if((k % 2 == 0) && (pb > vb))
            {
                kont = 1;
            }
            else if((k % 2 != 0) && (pb < vb))
            {
                kont = 1;
            }
            else
            {
                kont = 0;
                vc = 0;
                break;
            }
        }
        n[j]=nCopy;
        if(vc == 0)
        {
            for(int k = 0; n[j]/10 > 0 && nCopy >= 10; k++, n[j]/=10)
            {
                kont = 0;
                int pb = n[j] % 10;
                int vb = n[j] / 10 % 10;
                if((k % 2 == 0) && (pb < vb))
                {
                    kont = 1;
                }
                else if((k % 2 != 0) && (pb >    vb))
                {
                    kont = 1;
                }
                else
                {
                    kont = 0;
                    break;
                }
            }
            vc = 1;

        }

        if(kont)
            printf("%d\n", nCopy);
    }
    return 0;
}

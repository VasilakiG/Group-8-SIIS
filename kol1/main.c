#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    int cont = 1;
    scanf("%d%d", &m, &n);
    for(int i = m; i <= n; i++)
    {
        cont = 1;
        for(int j = i; j > 0; j /= 10)
        {
            if(j %2 !=0)
            {
                cont = 0;
                break;
            }
        }
        if(cont == 1)
        {
            printf("%d", i);
            break;
        }
        if(cont == 0 && i == n)
        {
            printf("NE");
        }
    }
    return 0;
}

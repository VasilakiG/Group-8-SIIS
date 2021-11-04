#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n > 2)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i+1; j++)
            {
                if(i == n-1)
                {
                    printf("*");
                }
                else if(j == 0 || j == i)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    else
        printf("Nevaliden vlez");

    return 0;
}

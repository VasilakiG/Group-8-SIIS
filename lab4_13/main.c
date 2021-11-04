#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n > 2)
    {
        for(int i = n; i > 0; i--)
        {
            for(int j = 0; j < i; j++)
            {
                if(i == n || j == 0 || j == i-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else
        printf("Nevaliden vlez");

    return 0;
}

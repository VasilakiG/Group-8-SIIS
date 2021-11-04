#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if(n <= 0 || m <= 0) printf("Invalid input");
    else
    {
        if(m > n)
        {
            int temp = m;
            m = n;
            n = temp;

        }
        int cifri=0;
        for(int i = n; i > 0; i /= 10) cifri++;

        n /= 10;

        while(m > 0)
        {
            if(n % 10 == m % 10)
            {
                n /= 100;
                m /= 10;
            }
            else
            {
                printf("NE");
                return 0;
            }
        }
        printf("PAREN");
    }
    return 0;
}

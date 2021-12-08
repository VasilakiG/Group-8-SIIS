#include <stdio.h>
#include <stdlib.h>

long long int pecatiCifri (long long int n, int k)
{
    if(n == 0) return 0;
    else if(n % 10 > k)
    {
        printf("%lld", n % 10);
        return n % 10 + pecatiCifri(n / 10, k);
    }
    else return pecatiCifri(n / 10, k);
}

int main()
{
    int k, n;
    scanf("%d%d", &k, &n);
    for(int i = 0; i < n; i++)
    {
        long long int m, obraten = 0;
        scanf("%lld", &m);
        for(long long int j = m; j > 0; j /= 10)
        {
            obraten = obraten * 10 + j % 10;
        }
        printf(" : %d\n", pecatiCifri(obraten, k));
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int palindrom = 0, nCopy = n;

    if(n >= 10000 && n < 100000)
    {
        for( ;n > 0 ; n /= 10)
        {
            palindrom = palindrom*10 + n%10;
        }
        //printf("%d", palindrom);
        if(nCopy == palindrom) printf("Palindrom");
        else printf("Ne e palindrom");
    }
    else printf("Nevaliden vlez");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int poramnet (int a)
{
    if(a == 0)
    {
        return 0;
    }
    else if(a > 0)
    {
        if(a % 10 == 9)
        {
            return poramnet(a / 10) * 10 + 7;
        }
        else
        {
            return poramnet(a / 10) * 10 + a % 10;
        }
    }
}

int main()
{
    int n, poramenti[100], i;
    for(i = 0; scanf("%d", &n); i++)
    {
        //printf("%d\n", poramnet(n));
        poramenti[i] = poramnet(n);
    }
    for(int k = 0; k < i; k++)
    {
        for(int j = k + 1; j < i; j++)
        {
            if(poramenti[k] > poramenti[j])
            {
                int temp = poramenti[k];
                poramenti[k] = poramenti[j];
                poramenti[j] = temp;
            }
        }
    }
    int kolku;
    if(i < 5)
    {
        kolku = i;
    }
    else
    {
        kolku = 5;
    }
    for(int k = 0; k < kolku; k++)
    {
        printf("%d ", poramenti[k]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int sumOfDigits (int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + sumOfDigits(n / 10);
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int sum = 0;
    for(i = 0; i < n; ++i)
    {

        int current;
        scanf("%d", &current);
        sum += sumOfDigits(current);
        printf("%d\n", sumOfDigits(current));
    }
    printf("%d", sum);
    return 0;
}

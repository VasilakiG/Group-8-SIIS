#include <stdio.h>
#include <stdlib.h>

int obratenBroj (int n)
{
    int obraten = 0;
    for( ; n > 0; n /= 10)
    {
        obraten = obraten * 10 + n % 10;
    }
    return obraten;
}

int sumaNaCifri (int n)
{
    int sum = 0;
    for( ; n > 0; n /= 10)
    {
        sum += n % 10;
    }
    return sum;
}

void pecatiVoInterval (int a, int b)
{
    for( ; a <= b; a++)
    {
        if((a + obratenBroj(a)) % sumaNaCifri(a + obratenBroj(a)) == 0)
        {
            printf("%d\n", a);
        }
    }

}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    pecatiVoInterval(a, b);
    return 0;
}

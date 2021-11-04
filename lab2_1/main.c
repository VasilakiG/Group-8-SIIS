#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tr, cena;
    scanf("%d%d", &tr, &cena);
    printf("%d", (tr-(cena*1.18))>=1);
    return 0;
}

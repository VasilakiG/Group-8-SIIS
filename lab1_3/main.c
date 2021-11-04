#include <stdio.h>
#include <stdlib.h>

int main()
{
    float masa, visina;
    scanf("%f%f", &masa, &visina);
    visina/=100;
    printf("%.2f", masa/visina/visina);
    return 0;
}

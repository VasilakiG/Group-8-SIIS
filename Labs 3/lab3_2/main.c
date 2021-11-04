#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if(b*b - 4*a*c > 0)
    {
        printf("Reshenija na ravenkata se: %.2f i %.2f", (-b-sqrt(b*b - 4*a*c))/(2*a), (-b+sqrt(b*b - 4*a*c))/(2*a));
    }
    else if(!(b*b - 4*a*c))
    {
        printf("Dvojno reshenie na ravenkata e: %.2f", (-b+sqrt(b*b - 4*a*c))/(2*a));
    }
    else printf("Ravenkata nema realni reshenija");
    return 0;
}

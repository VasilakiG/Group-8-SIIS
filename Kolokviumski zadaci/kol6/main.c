#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z, a, b, brZbir = 0, br = 0;
    scanf("%d", &z);
    while(1)
    {
        scanf("%d%d", &a, &b);
        if(a == 0 && b == 0) break;
        else
        {
            if(a + b == z) brZbir++;
            br++;
        }
    }
    printf("Vnesovte %d parovi od broevi chij zbir e %d\nProcentot na parovi so zbir %d e %.2f%%", brZbir, z, z, (float)brZbir/br*100);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int poeni[n], padnati[n], polozeni[n], pad = 0, pol = 0, brPa = 0, brPol = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &poeni[i]);
        if(poeni[i] < 50)
        {
            padnati[brPa] = poeni[i];
            brPa++;
            pad += poeni[i];
        }
        else
        {
            polozeni[brPol] = poeni[i];
            brPol++;
            pol += poeni[i];
        }
    }
    printf("Sredna vrednost na padnati %.2f\n", (float)pad/brPa);
    for(int i = 0; i < brPa; i++)
    {
        printf("%d ", padnati[i]);
    }
    printf("\nSredna vrednost na polozeni %.2f\n", (float)pol/brPol);
    for(int i = 0; i < brPol; i++)
    {
        printf("%d ", polozeni[i]);
    }
    return 0;
}

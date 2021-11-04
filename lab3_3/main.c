#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int c5 = 0;
    int nCopy = n;
    float nObraten = 0;
    for(int i = 0; i < 5; i++, nCopy /= 10)
    {
        if(nCopy%10 == 5)
        {
            c5++;
            nObraten += 6 * pow(10, i);
        }
        else nObraten += nCopy%10 * pow(10, i);
    }
    if(c5 < 2) printf("Error");
    else printf("%.4f%%", fabs((n-nObraten))*100/(float)n);
    //printf("%.0f\n", (nObraten));
    return 0;
}

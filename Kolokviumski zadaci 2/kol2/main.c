#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf()
{
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF)
    {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();
    FILE *dat = fopen("broevi.txt", "r");
    int n, maxBroj, maxCifra = 0;
    for( ; 1; )
    {
        fscanf(dat, "%d", &n);
        if(n == 0)
        {
            break;
        }
        maxCifra = 0;
        for(int i = 0; i < n; i++)
        {
            int m, cifra;
            fscanf(dat, "%d", &m);
            for(int j = m; j > 0; j /= 10)
            {
                cifra = j % 10;
            }
            if(cifra > maxCifra)
            {
                maxCifra = cifra;
                maxBroj = m;
            }
        }
        printf("%d\n", maxBroj);
    }


}

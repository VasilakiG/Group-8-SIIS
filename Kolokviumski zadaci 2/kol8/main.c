#include <stdio.h>
#include <string.h>
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    //wtf();
	FILE *dat = fopen("dat.txt", "r");
	int i, minCifra = 100, maxCifra = 0, maxRed = 0, najgolemMinCifra, najgolemMaxCifra;
	char red[100], najgolem[100];
	while(fgets(red, 100, dat))
    {
        int cifra = 0;
        minCifra = 100, maxCifra = 0;
        for(i = 0; red[i] != '\n' && red[i] != '\0'; i++)
        {
            if(red[i] >= '0' && red[i] <= '9')
            {
                if(i < minCifra)
                {
                    minCifra = i;
                }
                if(i > maxCifra)
                {
                    maxCifra = i;
                }
                cifra++;
            }
        }
        if(i >= maxRed && cifra >= 2)
        {
            strcpy(najgolem, red);
            najgolemMaxCifra = maxCifra;
            najgolemMinCifra = minCifra;
            maxRed = i;
        }
    }

    for(int j = najgolemMinCifra; j <= najgolemMaxCifra; j++)
    {
        printf("%c", najgolem[j]);
    }


}

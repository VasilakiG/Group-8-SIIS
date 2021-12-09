#include <stdio.h>
#include <string.h>
#include <math.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
	FILE *dat = fopen("livce.txt", "r");
	int suma, tip, prv = 0, maxTip;
	double kvota, maxKvota = 0, vkKvota = 1;
	char sifra[9], maxSifra[9];
	fscanf(dat, "%d", &suma);
	while(fscanf(dat, "%s", sifra) != EOF)
    {
        fscanf(dat, "%d%lf", &tip, &kvota);
        if(kvota > maxKvota)
        {
            maxKvota = kvota;
            strcpy(maxSifra, sifra);
            maxTip = tip;
        }
        vkKvota *= kvota;
    }

    printf("%s %d %.2f\n%.2f", maxSifra, maxTip, maxKvota, vkKvota * suma);

	return 0;

}

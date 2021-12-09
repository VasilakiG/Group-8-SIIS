#include <stdio.h>
#include <ctype.h>
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *dat = fopen("input.txt", "r");
    char red[100];
    int cifri[100];
    while(fgets(red, 1000, dat))
    {
        int cifra = 0;
        for(int i = 0; red[i] != '\n'; i++)
        {
            if(red[i] >= '0' && red[i] <= '9')
            {
                cifri[cifra] = red[i] - '0';
                cifra++;
            }
        }
        for(int i = 0; i < cifra; i++)
        {
            for(int j = i + 1; j < cifra; j++)
            {
                if(cifri[i] > cifri[j])
                {
                    int temp = cifri[i];
                    cifri[i] = cifri[j];
                    cifri[j] = temp;
                }
            }
        }

        printf("%d:", cifra);
        for(int i = 0; i < cifra; i++)
        {
            printf("%d", cifri[i]);
        }
        printf("\n");
            }
    return 0;
}

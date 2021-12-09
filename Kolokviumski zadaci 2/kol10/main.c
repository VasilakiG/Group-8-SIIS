#include <stdio.h>
#include <ctype.h>


void wtf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *dat = fopen("podatoci.txt", "r");
    char z1, z2, red[80];
    int najden = 0;
    z1 = getchar();
    z1 = getchar();
    z2 = getchar();
    //scanf("\n%c%c", &z1, &z2);
    while(fgets(red, 80, dat))
    {
        najden = 0;
        for(int i = 0; red[i] != '\n'; i++)
        {
            if(red[i] == z1 && !najden)
            {
                najden = 1;
            }
            else if(red[i] != z2 && najden)
            {
                printf("%c", red[i]);
            }
            else if(red[i] == z2)
            {
                break;
            }
        }
        printf("\n");
    }
    return 0;
}

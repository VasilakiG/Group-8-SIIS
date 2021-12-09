#include <stdio.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();
    char c;
    int vk = 0, mal = 0, gol = 0;
    FILE *dat = fopen("text.txt", "r");
    while((c = fgetc(dat)) != EOF)
    {
        if(c >= 'a' && c <= 'z')
        {
            mal++;
        }
        else if(c >= 'A' && c <= 'Z')
        {
            gol++;
        }

        if(!(c >= 32 && c <= 64))
        {
            vk++;
        }
    }
    fclose(dat);
    printf("%.4f\n%.4f", gol/(float)vk, mal/(float)vk);
    // vasiot kod ovde
}

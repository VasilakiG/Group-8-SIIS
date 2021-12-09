#include <stdio.h>

void writeToFile() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[100];
    while(!feof(f)){
        fgets(line,100,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    writeToFile();
    FILE *dat = fopen("input.txt", "r");
    int n;
    fscanf(dat, "%d", &n);
    int a[n][n], zbirD = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            fscanf(dat, "%d", &a[i][j]);
            if(i == j)
            {
                zbirD += a[i][j];
            }
        }
    }
    fclose(dat);

    FILE *dat2 = fopen("output.txt", "w");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j > i)
            {
                fprintf(dat2, "%03d ", zbirD);
            }
            else fprintf(dat2, "    ");
        }
        fprintf(dat2, "\n");

    }
    fclose(dat2);
    printFile();
    return 0;
}

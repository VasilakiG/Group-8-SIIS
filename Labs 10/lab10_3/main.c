#include <stdio.h>
#include <string.h>

void writeToFile()
{
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#')
    {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    writeToFile();
    FILE *dat = fopen("text.txt", "r");
    int zbVoRed = 0, prosek = 0, max = 0, red = 0;
    char c[1000], najgolem[1000];
    for(int i = 0; fgets(c, 1000, dat); i++)
    {
        for(int j = 0; c[j] != EOF; j++)
        {
            if(c[j] == ' ')
            {
                zbVoRed++;
            }
            else if(c[j] == '\n' && zbVoRed != 0)
            {
                zbVoRed++;
                prosek += zbVoRed;
                red++;
                printf("%d\n", zbVoRed);
                if(zbVoRed > max)
                {
                    max = zbVoRed;
                    strcpy(najgolem, c);
                }
                zbVoRed = 0;
                break;
            }
        }
    }
    printf("%.2f\n", prosek / (float)red);

    for(int i = 0; najgolem[i] != '\n'; i++)
    {
        if(najgolem[i] >= 'a' && najgolem[i] <= 'z')
        {
            najgolem[i] -= 32;
        }
        else if(najgolem[i] >= 'A' && najgolem[i] <= 'Z')
        {
            najgolem[i] += 32;
        }
        printf("%c", najgolem[i]);
    }
}

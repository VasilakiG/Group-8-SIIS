#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void letterFrequency (char * text, char letter)
{
    int mala = 0, golema = 0, i;
    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i] == tolower(letter))
        {
            mala++;
        }
        else if(text[i] == toupper(letter))
        {
            golema++;
        }
    }
    //i--;
    printf("%c -> %.3f%%\n%c -> %.3f%%", (char)tolower(letter), mala/(float)i*100, (char)toupper(letter), golema/(float)i*100);
}

int main(int argc, char *argv[])
{
    char text[1000];
    fgets(text, 1000, stdin);
    char bukva;
    scanf("%c", &bukva);
    letterFrequency(text, bukva);
    return 0;
}

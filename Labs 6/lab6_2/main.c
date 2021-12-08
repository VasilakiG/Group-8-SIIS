#include <stdio.h>
#include <stdlib.h>

int main()
{
    char azbuka[26];
    for(char bukva = 'A'; bukva <= 'Z'; bukva++)
    {
        azbuka[bukva - 'A'] = bukva;
    }

    char c;
    int kluc;

    scanf("%c%d", &c, &kluc);

    for(int i = 0; i < 26; i++)
    {
        if(azbuka[i] == c)
        {
            printf("%c", azbuka[(c - 'A' + kluc) % 26]);
            return 0;
        }
    }
    return 0;
}

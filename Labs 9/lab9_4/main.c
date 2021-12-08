#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void obraten (char *str)
{
    int dol = 0, i, j;
    char temp;
    dol = strlen(str);

    for(i = dol - 1, j = 0; j < (dol / 2); i--,j++)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }
}

char *revertString(char *a, char *b, char *comparator)
{
    obraten(a);
    obraten(b);
    for (int i = 0; i < strlen(comparator); ++i)
    {
        comparator[i] = tolower((char) comparator[i]);
    }
    if(!(strcmp(comparator, "pomal")))
    {
        /*for(int i = 0; i < strlen(a) && i < strlen(b); i++)
        {
            if(a[i] > b[i])
            {
                //obraten(b);
                return b;
            }
            else if(a[i] == b[i])
            {
                continue;
            }
            else if(a[i] < b[i])
            {
                //obraten(a);
                return a;
            }
        }*/
        if(strcmp(a, b) < 0)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
    else if(!(strcmp(comparator, "pogolem")))
    {
        /*for(int i = 0; i < strlen(a) && i < strlen(b); i++)
        {


            if(a[i] > b[i])
            {
                //obraten(a);
                return a;
            }
            else if(a[i] == b[i])
            {
                continue;
            }
            else if(a[i] < b[i])
            {
                //obraten(b);
                return b;
            }
        }*/
        if(strcmp(a, b) > 0)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
    else
        return "Invalid comparator";

}

    int main()
    {
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            char a[100], b[100], comparator[100];
            scanf("%s%s%s", &a, &b, &comparator);
            printf("%s\n", revertString(&a, &b, &comparator));
        }
        return 0;
    }

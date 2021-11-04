#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c;
    int hex=0;
    while(1)
    {
        c=tolower(getchar());
        switch(c)
        {
            case '1':
                hex += 1;
                break;
            case '2':
                hex += 2;
                break;
            case '3':
                hex += 3;
                break;
            case '4':
                hex += 4;
                break;
            case '5':
                hex += 5;
                break;
            case '6':
                hex += 6;
                break;
            case '7':
                hex += 7;
                break;
            case '8':
                hex += 8;
                break;
            case '9':
                hex += 9;
                break;
            case 'a':
                hex += 10;
                break;
            case 'b':
                hex += 11;
                break;
            case 'c':
                hex += 12;
                break;
            case 'd':
                hex += 13;
                break;
            case 'e':
                hex += 14;
                break;
            case 'f':
                hex += 15;
                break;
            case '0':
                hex += 0;
                break;
            default:
                break;
        }
        if(c=='.')
        {
            if(hex % 16 == 0)
            {
                if(hex % 100 == 16)
                {
                    printf("Poln pogodok");
                }
                else printf("Pogodok");
            }
            else printf("%d", hex);
            break;
        }

    }
    return 0;
}

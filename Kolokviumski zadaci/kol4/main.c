#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int zbir = 0, br, prethoden = 0;
    while(1)
    {
        c = getchar();
        if(c >= '0' && c <= '9')
        {
            char c1 = getchar();
            if(c1 >= '0' && c1 <= '9')
            {
                br = (c - 48) * 10 + c1 - 48;
                zbir += br;
            }
            else if(c1 != '\n')
            {
                br = c - 48;
                zbir += br;
            }
        }
        else if(c == '\n')
        {
            printf("%d", zbir);
            break;
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int poeni;
    scanf("%d", &poeni);
    if(poeni >= 0 && poeni <= 100)
    {
        if(poeni >= 0 && poeni <= 50)
        {
            printf("Ocenka 5");
        }
        else if(poeni >= 51 && poeni <= 60)
        {
            printf("Ocenka 6");
        }
        else if(poeni >= 61 && poeni <= 70)
        {
            printf("Ocenka 7");
        }
        else if(poeni >= 71 && poeni <= 80)
        {
            printf("Ocenka 8");
        }
        else if(poeni >= 81 && poeni <= 90)
        {
            printf("Ocenka 9");
        }
        else if(poeni >= 91 && poeni <= 100)
        {
            printf("Ocenka 10");
        }

        if(poeni >= 51)
        {
            if(poeni % 10 >= 1 && poeni % 10 <= 3)
                printf("-");
            else if((poeni % 10 >= 8 && poeni % 10 <= 9) || poeni % 10 == 0)
                printf("+");
        }
    }
    else printf("Nevalidna vrednost za poeni!");

    return 0;
}

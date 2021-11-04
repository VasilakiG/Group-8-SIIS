#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, br1 = 0, br2 = 0, br3 = 0;
    scanf("%d", &n);
    int studenti[n], gr1[n], gr2[n], gr3[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &studenti[i]);
        if(studenti[i] % 10 >= 0 && studenti[i] % 10 <= 2)
        {
            gr1[br1] = studenti[i];
            br1++;
        }
        else if(studenti[i] % 10 >= 3 && studenti[i] % 10 <= 5)
        {
            gr2[br2] = studenti[i];
            br2++;
        }
        else if(studenti[i] % 10 >= 6 && studenti[i] % 10 <= 9)
        {
            gr3[br3] = studenti[i];
            br3++;
        }
    }

    printf("Grupa 1\n");
    for(int i = 0; i < br1; i++)
    {
        printf("%d ", gr1[i]);
    }
    printf("\nGrupa 2\n");
    for(int i = 0; i < br2; i++)
    {
        printf("%d ", gr2[i]);
    }
    printf("\nGrupa 3\n");
    for(int i = 0; i < br3; i++)
    {
        printf("%d ", gr3[i]);
    }
    return 0;
}

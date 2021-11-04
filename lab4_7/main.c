#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, min, max, m;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        if(!i)
        {
            scanf("%d", &m);
            min = max = m;
        }
        else
        {
            scanf("%d", &m);
            if(m > max)
            {
                max = m;
            }
            if(m < min)
            {
                min = m;
            }
        }
    }

    printf("Najgolema razlika: %d", max - min);
    return 0;
}

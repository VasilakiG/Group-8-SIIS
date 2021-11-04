    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int n;
        scanf("%d", &n);
        if(n <= 9) printf("Brojot ne e validen");
        else
        {
            int m = 0, cifri = 0;
            for(n-- ; n > 0; n--)
            {
                cifri = 0;
                m = 0;
                for(int i = n; i > 0; i /= 10)
                {
                    m = m*10 + i%10;
                    cifri++;
                }
                if(m % cifri == 0)
                {
                    printf("%d", n);
                    break;
                }
            }
        return 0;

        }
    }

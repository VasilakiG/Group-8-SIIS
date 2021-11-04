#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tel;
    scanf("%d", &tel);
    int prefiks=tel/1000000;
    printf("0%d/%03d-%03d", prefiks, tel%1000000/1000, tel%1000);
    if(prefiks == 70 || prefiks == 71 || prefiks == 72) printf(" T-mobile");
    else if(prefiks == 75 || prefiks == 76 || prefiks == 77 || prefiks == 78) printf(" A1");
    else if(prefiks == 79) printf(" LycaMobile");
}

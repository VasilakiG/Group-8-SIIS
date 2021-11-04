#include <stdio.h>
#include <stdlib.h>

int main()
{
    int indeks, o1, o2, o3, o4, o5, o6;
    scanf("%d%d%d%d%d%d%d", &indeks, &o1, &o2, &o3, &o4, &o5, &o6);
    float prosek=(o1+o2+o3+o4+o5+o6)/6.;
    printf("Prosek: %.3f\nStudent: %d\n%d godina\nNagraden: %d",prosek, indeks, 20-indeks/10000, prosek>=9.5);
    return 0;
}

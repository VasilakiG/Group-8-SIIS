    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #define ime(var) #var

    int main()
    {
        float xa, xb, xc, ya, yb, yc, ab, bc, ca;
        scanf("%f%f%f%f%f%f", &xa, &ya, &xb, &yb, &xc, &yc);
        ab = sqrt(pow(xa-xb, 2) + pow(ya-yb, 2));
        bc = sqrt(pow(xb-xc, 2) + pow(yb-yc, 2));
        ca = sqrt(pow(xa-xc, 2) + pow(ya-yc, 2));
        if (ab > bc && ab > ca) printf("AB");
        else if (bc > ab && bc > ca) printf("BC");
        else if (ca > ab && ca > bc) printf("AC");
        return 0;
    }

#include <stdio.h>

int main ()
{
    float a, b, i, j, x, y, hasil;

    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    hasil = (float)((a - b) * i) / j - (x + y);

    printf("%.3f\n\n", hasil);
    return 0;
}
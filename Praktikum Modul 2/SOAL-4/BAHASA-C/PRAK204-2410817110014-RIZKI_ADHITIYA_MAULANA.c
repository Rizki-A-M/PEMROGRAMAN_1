#include <stdio.h>
#include <math.h>

int main ()
{
    float jari_jari, tinggi, volume, luas, keliling;

    scanf("%f %f", &jari_jari, &tinggi);

    volume = 22.0 / 7.0 * jari_jari * jari_jari * tinggi;
    luas = 2 * 22.0 / 7.0 * jari_jari * (jari_jari + tinggi);
    keliling = 2 * 22.0 / 7.0 * jari_jari;

    printf("\n");
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n\n", keliling);
    return 0;
}
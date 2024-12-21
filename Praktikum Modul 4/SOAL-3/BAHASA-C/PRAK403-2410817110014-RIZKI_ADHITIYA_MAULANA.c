#include <stdio.h>

int main ()
{
    int angka_pertama, angka_kedua;

    scanf("%d %d", &angka_pertama, &angka_kedua);

    for (int i = angka_pertama, j = angka_kedua; i <= angka_kedua && j >= angka_pertama; i++, j--)
    {
        printf("%d %d", i, j);
        if (i < angka_kedua||j > angka_pertama)
        {
            printf(" - ");
        }
    }

    for (int i = angka_pertama, j = angka_kedua; i >= angka_kedua && j <= angka_pertama; i--, j++)
    {
        printf("%d %d", i, j);
        if (i > angka_kedua||j < angka_pertama)
        {
            printf(" - ");
        }
    }
    return 0;
}
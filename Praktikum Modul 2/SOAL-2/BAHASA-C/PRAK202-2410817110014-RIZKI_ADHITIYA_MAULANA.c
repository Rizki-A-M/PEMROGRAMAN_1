#include <stdio.h>

int main ()
{
    float nilai_pertama, nilai_kedua, hasil;

    printf("Masukkan Nilai Pertama: ");
    scanf("%g", &nilai_pertama);

    printf("Masukkan Nilai Kedua: ");
    scanf("%g", &nilai_kedua);

    hasil = nilai_pertama + nilai_kedua;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"", nilai_pertama, nilai_kedua, hasil);
    return 0;
}
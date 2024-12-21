#include <stdio.h>

int main ()
{
    int pilihan;
    float nilai_pertama, nilai_kedua, hasil;

    while (1)
    {
    printf("Pilih program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");

    printf("Masukkan Pilihan : ");
    scanf("%d", &pilihan);

        if (pilihan == 1)
        {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilai_pertama);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai_kedua);
            hasil = nilai_pertama + nilai_kedua;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", nilai_pertama, nilai_kedua, hasil);
            continue;
        }

        else if (pilihan == 2)
        {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilai_pertama);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai_kedua);
            hasil = nilai_pertama - nilai_kedua;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", nilai_pertama, nilai_kedua, hasil);
            continue;
        }

        else if (pilihan == 3)
        {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilai_pertama);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai_kedua);
            hasil = nilai_pertama * nilai_kedua;
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", nilai_pertama, nilai_kedua, hasil);
            continue;
        }

        else if (pilihan == 4)
        {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilai_pertama);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai_kedua);
            hasil = nilai_pertama / nilai_kedua;
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", nilai_pertama, nilai_kedua, hasil);
            continue;
        }

        else if (pilihan == 5)
        {
            printf("Terimakasih, telah menggunakan kalkulator RIZKI ADHITIYA MAULANA");
            break;
        }
    
        else
        {
        printf("Input anda salah, silahkan coba lagi\n\n");
        continue;
        }  
    }
    return 0;
}
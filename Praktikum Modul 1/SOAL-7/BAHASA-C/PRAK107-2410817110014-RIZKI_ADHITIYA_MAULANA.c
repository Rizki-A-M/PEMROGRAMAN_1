#include <stdio.h>

int main ()
{
    int sisi_1 = 4;
    int sisi_2 = 5;
    int sisi_3 = 7;
    int keliling = sisi_1 + sisi_2 + sisi_3;
    int harga_per_meter = 85000;
    int luas_tanah = keliling * harga_per_meter;

    printf("Diketahui : \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d,%d, dan %d\n", sisi_1, sisi_2, sisi_3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n",keliling);
    printf("Harga tanah Per Meter adalah %d\n",harga_per_meter);
    printf("Jawaban : \n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n",luas_tanah);
    return 0;
}
#include <stdio.h>

int main ()
{
    int harga_a = 400000;
    int harga_b = 350000;
    int discount_a = (harga_a * 13) / 100;
    int discount_b = (harga_b * 21) / 100;

    printf("Harga sepatu A adalah %d\n",harga_a);
    printf("Harga sepatu B adalah %d\n",harga_b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", harga_a - discount_a);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", harga_b - discount_b);
    return 0;
}
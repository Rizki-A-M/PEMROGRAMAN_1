#include <stdio.h>

int main ()
{
    int pasukan_Yu_Zhong = 958730;
    int pahlawan = 5;
    int pasukan_dibunuh_per_pahlawan = pasukan_Yu_Zhong / pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d pasukan\n",pasukan_Yu_Zhong);
    printf("Jumlah pahlawan = %d\n",pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n",pasukan_dibunuh_per_pahlawan);
    return 0;
}
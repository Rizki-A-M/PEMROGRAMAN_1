#include <stdio.h>

int main ()
{
    int nilai;

    scanf("%d", &nilai);

    if (nilai == 0){
        printf("Nol");
    }
    else if (nilai >= 1 && nilai <=9){
        printf("Satuan");
    }
    else if (nilai >= 11 && nilai <= 19){
        printf("Belasan");
    } 
    else if (nilai == 10||nilai >= 20 && nilai <=99){
        printf("Puluhan");
    }
    else {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    return 0;  
}
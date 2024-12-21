#include <stdio.h>

int main ()
{
    int hari, jam, menit, detik, total_detik, sisa_detik;

    scanf("%d", &total_detik);

    hari = total_detik / 86400;
    sisa_detik = total_detik % 86400;

    jam = sisa_detik / 3600;
    sisa_detik %= 3600;

    menit = sisa_detik / 60;
    detik = sisa_detik % 60;

    if (hari > 0){
        printf("%d hari %0.2d:%0.2d:%0.2d", hari, jam, menit, detik);
    }
    else{
        printf("%0.2d:%0.2d:%0.2d", jam, menit, detik);
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

int main ()
{
    int putaran = 5;
    int jarak = 14;
    float PI = 3.14159265;
    float jari_jari = (float) jarak / (2 * PI * putaran);
    
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n",putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n\n",jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n",jari_jari);
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char pesan_sikamaru[100],pesan_rahasia[100];
    int bintang=0,pagar=0;

    fgets(pesan_sikamaru, sizeof(pesan_sikamaru), stdin);
    fgets(pesan_rahasia, sizeof(pesan_rahasia), stdin);

    pesan_sikamaru[strcspn(pesan_sikamaru, "\n")]= '\0';
    pesan_rahasia[strcspn(pesan_rahasia, "\n")]= '\0';

    if(strlen(pesan_sikamaru) == strlen(pesan_rahasia))
    {
        int panjang_pesan = strlen(pesan_sikamaru);
        for(int i=0; i<panjang_pesan; i++)
        {
            if(pesan_sikamaru[i]==' ' && pesan_rahasia[i]==' ')
            {
                continue;
            }

            if(pesan_sikamaru[i]==pesan_rahasia[i])
            {
                printf("*");
                bintang++;
            }
                
            else
            {
                printf("#");
                pagar++;
            }
        }

        printf("\n* = %d",bintang);
        printf("\n# = %d",pagar);

        if(bintang>=pagar)
        {
            printf("\nPesan Asli");
        }
        else
        {
            printf("\nPesan Palsu");
        }
    }

    else
    {
        printf("Panjang Kalimat berbeda, pesan palsu");
    }
    return 0;
}
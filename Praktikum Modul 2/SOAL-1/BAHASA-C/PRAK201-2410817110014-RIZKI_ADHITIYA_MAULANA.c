#include <stdio.h>

int main ()
{
    char nama   [50];
    char nim    [50];
    char kelas  [50];
    char ttl    [50];
    char alamat [99];
    char hobby  [50];
    char no_hp  [50];

    printf("Nama\t\t\t: ");
    fgets(nama, sizeof(nama), stdin);

    printf("NIM\t\t\t: ");
    fgets(nim, sizeof(nim), stdin);

    printf("Kelas Paralel\t\t: ");
    fgets(kelas, sizeof(kelas), stdin);

    printf("Tempat/Tanggal Lahir\t: ");
    fgets(ttl, sizeof(ttl), stdin);

    printf("Alamat\t\t\t: ");
    fgets(alamat, sizeof(alamat), stdin);

    printf("Hobby\t\t\t: ");
    fgets(hobby, sizeof(hobby), stdin);

    printf("No. HP\t\t\t: ");
    fgets(no_hp, sizeof(no_hp), stdin);

    printf("\n");
    printf("Nama\t\t\t: %s", nama);
    printf("NIM\t\t\t: %s", nim);
    printf("Kelas Paralel\t\t: %s", kelas);
    printf("Tempat/Tanggal Lahir\t: %s", ttl);
    printf("Alamat\t\t\t: %s", alamat);
    printf("Hobby\t\t\t: %s", hobby);
    printf("No. HP\t\t\t: %s", no_hp);
    return 0;
}
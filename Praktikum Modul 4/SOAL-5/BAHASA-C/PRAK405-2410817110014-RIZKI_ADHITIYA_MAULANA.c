#include <stdio.h>

int main ()
{
    int i, j;
    int baris, pengali, total=0;

    scanf("%d %d", &baris, &pengali);

    for (i = 1; i <= baris; i++)
    {
        int sum = 0;
        printf("(");

        for (j = i; j >= 1; j--)
        {
            printf("%d * %d", j, pengali);
            sum += j * pengali;

            if (j>1)
            {
                printf(") + (");
            } 
        }
        printf(") = %d\n", sum);
        total += sum;
    }
    printf ("%d\n", total);
    return 0;
}
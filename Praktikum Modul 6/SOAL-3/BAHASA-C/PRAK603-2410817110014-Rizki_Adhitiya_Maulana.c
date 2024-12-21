#include <stdio.h>

int main ()
{
    while (1)
    {
        int n1, n2;
    
        scanf("%d %d", &n1, &n2);

        if (n1 == n2)
        {
            int nilai_1[n1], nilai_2[n2], nilai_hasil[n1]; 
            for (int i = 0; i < n1; i++)
            {
                scanf("%d", &nilai_1[i]);
            }
        
            for (int i = 0; i < n2; i++)
            {
                scanf("%d", &nilai_2[i]);
                }

            printf("\n");
            for (int i = 0; i < n2; i++)
            {
                nilai_hasil[i] = nilai_1[i] * nilai_2[i];
                printf("%d ", nilai_hasil[i]);
            }
            break;
        }
        
        else
        {
            printf("Jumlah tidak sama\n\n");
            continue;
        }
    }
    return 0;
}
#include <stdio.h>

int main ()
{
    int kolom;
    scanf("%d", &kolom);

    int nilai_Zetsu[kolom];
    for (int i = 0; i < kolom; i++)
    {
        scanf("%d", &nilai_Zetsu[i]);
    }
    
    printf("\n");
    for (int i = 0; i < kolom; i++)
    {
        nilai_Zetsu[i] *= (i+1);
        printf("%d ", nilai_Zetsu[i]);
    }
    return 0;
}
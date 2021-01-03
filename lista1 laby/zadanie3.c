#include <stdio.h>

int main(void)
{
    int n;
    printf("Podaj n: \n");
    scanf("%d", &n);
    for(int i = 1; i<=n;i++) // n wierszy
    {
        for(int j = 1; j<=2*n; j++) //2n kolumn
        {
            printf("%s","*");
        }
        printf("\n");
    }
}
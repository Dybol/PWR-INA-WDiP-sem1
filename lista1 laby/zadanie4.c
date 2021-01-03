#include <stdio.h>

int main()
{
    printf("Podaj liczbe a wygeneruje trojkat: \n");
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++) //petla wykonywania tyle razy ile wynosi n
    {
        for(int k = n-i; k>0; k--) //generuje spacje potrzebne do wyswietlenia calego trojkata
        {
            printf(" ");
        }
        for(int j = 1; j<=2*i-1; j++) //generuje gwiazdki
        {
            printf("%s","*"); 
        }
        printf("\n");
    }
    return 0;


}
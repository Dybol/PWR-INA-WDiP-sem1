#include <stdio.h>


int main()
{
    float a, srednia=0;
    int n;

    printf("Podaj ilosc liczb: ");
    scanf("%d",&n);

    printf("Wprowadz liczby:\n");
    for(int i = 0; i<n; i++) {
        scanf("%f", &a);
        srednia+=a;
    }

    printf("Srednia jest rowna: %f", srednia/n);

    return 0;
}
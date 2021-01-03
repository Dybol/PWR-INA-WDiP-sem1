#include <stdio.h>

int sumaDzielnikow(int liczba) {
    int s = 0;
    for(int i = 1; i<=liczba/2; i++){
        if(liczba%i==0) {
            s+=i;
        }
    }
    return s;
}


void doskonala(int limit) {
    for(int i = 1; i<limit; i++) {
        if(sumaDzielnikow(i)==i) {
            printf("Liczba %d jest doskonala!\n",i);
        }
    }
}


void zaprzyjaznione(int limit) {
    for(int i = 1; i<=limit; i++) {
        for(int j = 1; j<=limit; j++) {
            if(i==sumaDzielnikow(j) && j==sumaDzielnikow(i) && i!=j && (i<j) ){
                printf("Liczby %d i %d sa zaprzyjaznione!\n", i,j);
            }
        }
    }
}

int main()
{
    doskonala(1000);
    zaprzyjaznione(1000);
    //printf("%d",sumaDzielnikow(28));
    return 0;
}

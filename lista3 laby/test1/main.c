#include <stdio.h>
#include <stdlib.h>
#include "listy.h"

Lista dopisz_na_poczatek ( Lista wsk , int i) {
    Lista nowy;
    nowy = malloc(sizeof(struct Wezeł));
    nowy -> wartosc= i;
    nowy -> nastepny = wsk;
    return nowy ;
}

void dopisz_na_koniec ( Lista* wsk , int i) {
    Lista nowy , pomoc ;
    nowy = malloc ( sizeof ( struct Wezeł));
    nowy -> wartosc = i;
    nowy -> nastepny = NULL ;
    if (* wsk == NULL )
        *wsk = nowy ;
    else {
        pomoc = * wsk;
        while (pomoc -> nastepny != NULL )
        pomoc = pomoc -> nastepny ;
        pomoc -> nastepny = nowy ;
    }
}
void drukuj ( Lista wsk) {
    while (wsk != NULL ) {
        printf ("%d ", wsk -> wartosc);
        wsk = wsk -> nastepny;
    }
}

int main() {
    Lista lista;
    //lista->wartosc = 5;
    lista = dopisz_na_poczatek(lista, 10);
    lista = dopisz_na_poczatek(lista, 15);
    dopisz_na_koniec(&lista, 69);
    drukuj(lista);
    //lista = dopisz_na_koniec(*lista, 5);
    printf("%d\n", lista->wartosc);
}
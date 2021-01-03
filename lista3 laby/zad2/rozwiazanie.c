#include <stdio.h>
#include <assert.h>
#include "funs.h"

double rozwiazanie(double a, double b, double eps) {
    assert(a<b); //z zalozenia a<b
    /*double temp = a; //zmienna pomocnicza przyjmuje wartosc rowna a - skrajna wartosc przedzialu z lewej strony.
    while(temp+eps<=b) {
        if((f(temp) > 0 && f(temp+eps) < 0) || (f(temp) < 0 && f(temp+eps) > 0)) { //warunek znajdowania sie miejsca zerowego w przedziale
            return (temp + temp + eps)/2; //usredniam wartosc z danego przedzialu dla wiekszej dokladnosci
        }
        else {
            temp = (double) temp + eps; //po kazdym przejsciu petli zwiekszamy zmienna pomocznica o epsilon 
        }
    }
    printf("Nie znalezniono!\n");
    return 1;*/

    double lewa = a;
    double prawa = b;
    while(prawa - lewa > eps) { //sprawdzam kiedy ich roznica bedzie mniejsza lub rowna epsilonowi, zeby zakonczyc iteracje (im mniejszy eps tym wieksza dokladnosc)
        if((f(lewa) > 0 && f((lewa+prawa)/2) < 0) || (f(lewa) < 0 && f((lewa+prawa)/2) > 0)) { //sprawdzam przedziałami 
            prawa = (lewa+prawa)/2;
        }
        else {
            lewa = (lewa+prawa)/2;
        }
        //printf("Lewa = %lf ", lewa);
        //printf("Prawa = %lf\n", prawa);
    }
    return (lewa + prawa ) / 2;
}
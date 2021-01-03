#include <stdio.h>
#include <math.h>
#include <assert.h>

double f(double x) {
    double wynik = cos(x/2);
    return wynik;
}

double rozwiazanie(double a, double b, double eps) {
    assert(a<b); //z zalozenia a<b
    double temp = a; //zmienna pomocnicza przyjmuje wartosc rowna a - skrajna wartosc przedzialu z lewej strony.
    while(temp+eps<=b) {
        if((f(temp) > 0 && f(temp+eps) < 0) || (f(temp) < 0 && f(temp+eps) > 0)) { //warunek znajdowania sie miejsca zerowego w przedziale
            return (temp + temp + eps)/2; //usredniam wartosc z danego przedzialu dla wiekszej dokladnosci
        }
        else {
            temp = (double) temp + eps; //po kazdym przejsciu petli zwiekszamy zmienna pomocznica o epsilon
        }
    }
    printf("Nie znalezniono!\n");
    return 1;
}

int main() {
    printf("Dla epsilona = 0.1: %lf\n",rozwiazanie(2,4,0.1));
    printf("Dla epsilona = 0.01: %lf\n",rozwiazanie(2,4,0.01));
    printf("Dla epsilona = 0.001: %lf\n",rozwiazanie(2,4,0.001));
    printf("Dla epsilona = 0.0001: %lf\n",rozwiazanie(2,4,0.0001));
    printf("Dla epsilona = 0.00001: %lf\n",rozwiazanie(2,4,0.00001));
    printf("Dla epsilona = 0.000001: %lf\n",rozwiazanie(2,4,0.000001));
    printf("Dla epsilona = 0.0000001: %lf\n",rozwiazanie(2,4,0.0000001));
    printf("Dla epsilona = 0.00000001: %lf\n",rozwiazanie(2,4,0.00000001));
    return 0;
     
}
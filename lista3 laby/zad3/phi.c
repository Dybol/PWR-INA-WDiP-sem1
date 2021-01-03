#include <stdio.h> 
#include <stdbool.h>
#include <assert.h>
#include "funs.h"

//sprawdzam, czy dana liczba jest pierwsza, zeby nie wywolywac innych funkcji, poniewaz od razu znamy odpowiedz do zadania
bool czyPierwsza(long int n) {
    assert(n>=0);
    if(n==0 || n==1) {
        return false;
    }
    for(long i=2; i<=n/2; i++)
	{
		if(n%i!=0)
			continue;
		else
			return false;
	}
    return true;
}
//funckja odpowiedzialna za liczenie NWD dwoch liczb (rekurenyjna, blad ochrony pamieci dla pewnych wartosci)
/*
long int NWD(long int a, long int b) {
    if(a!=b) {
        if(a>b) {
            return NWD(b, (a-b));
        }
        else {
            return NWD(a, (b-a));
        }
    }
    return a;
}*/
//funckja odpowiedzialna za liczenie NWD dwoch liczb
long int NWD(long int a, long int b) {
    while(a!=b) {
       if(a>b) {
           a-=b; 
       }
       else {
           b-=a; 
       }
    }
    return a;
}

long int phi(long int n) { //zmienilem typ funkcji na long int, bo jak n jest pierwsze to wynik bedzie tylko o 1 mniejszy

    if(czyPierwsza(n)) {
        return n-1; //czy warto? jezeli liczba jest pierwsza to wykona sie w czasie n/2, a jak nie to n/2 + n + czas nwd
    }
    else {
        long int licznik = 0;
        for(long int i = 1; i < n; i++) {
            if(NWD(i, n) == 1) {
                licznik++;
            }
        }
        return licznik;
            
    }
}
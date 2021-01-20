#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool match(char* wzorzec, char* lancuch);

//prosta funkcja sprawdzajaca czy wzorzec zgadza sie z lancuchem gdy nie ma gwiazdki
bool match_without_asterisk(char* wzorzec, char* lancuch) {

    for(int i = 0; i < strlen(wzorzec); i++) {
        if(wzorzec[i] != lancuch[i] &&  wzorzec[i] != '?') {
            return false;
        }
    }

    return true;
}

//na pewno na pierwszym miejscu jest gwiazdka, bo tylko w takiej sytuacji wywoluje ta funkcje
bool match_with_asterisk(char* wzorzec, char* lancuch) {
    if(wzorzec[0] != '*') {
        printf("ZLE UZYTO FUNKCJI");
        return false;
    }

    //to oznacza ze wzorcu jest tylko gwiazdka, wiec na pewno prawda
    if(strlen(wzorzec) == 1) {
        return true;
    }

    //jako szukany oznaczam kolejny znak po gwiazdce
    char poszukiwany = wzorzec[1];

    //To oznacza, ze znaku po gwiazdce nie ma w lancuchu, wiec na pewno jest blad. (i nie jest to ani ? ani *)
    if(!strchr(lancuch, poszukiwany) && !(poszukiwany == '?') && !(poszukiwany == '*')) {
        return false;
    } 

    else {
        for(int i = 0; i < strlen(lancuch); i++) {

            //jezeli znalezlismy poszukiwany przez nas znak
            if(lancuch[i] == poszukiwany || poszukiwany == '?') {

                //jezeli dalsza czesc wzorca ma jeszcze gwiazdke, to wywolujemy match od poczatku
                if(strchr(&wzorzec[1], '*')) { 
                    //wzorek od 2, bo na 0 jest gwiazdka, a na 1 znaleziony znak, lancuch zaczynamy od miejsca znalezionego znaku + 1
                    return match(&wzorzec[2], &lancuch[i+1]);
                }
                
                //jezeli nie ma juz gwiazdek, to patrzymy na ogon lancucha i wywolujemy znowu match()
                else {
                    int length = strlen(&wzorzec[1]);
                    return match(&wzorzec[1], &lancuch[strlen(lancuch) - length]);
                }
            //jezeli okazalo sie, ze poszukiwana byla gwiazdka, czyli sytuacja z dwoma gwiazdkami obok siebie
            } else if(poszukiwany == '*') {
                //wywolujemy ta sama funkcje z wzorcem przesunietym o jeden w prawo
                return match_with_asterisk(&wzorzec[1], lancuch);
            }
        }
    }

    //to juz na pewno sie nie wykona bo sprwadzono wszystko
    return false;
}

bool match(char* wzorzec, char* lancuch) {

    //wzorzec i lancuch sa rownej dlugosci, a we wzorcu nie ma gwiazdek
    if((strlen(wzorzec) == strlen(lancuch) && !strchr(wzorzec, '*'))) { 
        return match_without_asterisk(wzorzec, lancuch);
    } 

    //jezeli nie ma gwiazdek, a dlugosc wzorca jest inna niz lancucha to na pewno falsz
    else if(strlen(wzorzec) != strlen(lancuch) && !strchr(wzorzec, '*')) {
        return false;
    }

    //dany znak we wzorze odpowiada danemu znakowi w lancuchu, albo jest to znak zapytania
    else if(wzorzec[0] == lancuch[0] || wzorzec[0] == '?') { 
        return match(&wzorzec[1], &lancuch[1]); //wywolujemy funkcje bez tych znakow
    }

    //jezeli dany znak we wzorze jest rowny gwiazdce, to wywolujemy odpowiednia funkcje
    else if(wzorzec[0] == '*') {
        return match_with_asterisk(wzorzec, lancuch);
    }
    
    //wszystkie przypadki po ktorych moze byc prawda sprawdzone, wiec zostaje  tylko falsz, np gdy wz[0] != lan[0] .
    else {
        return false;
    }

}


int main() {

    printf("%d\n", match("a*b*a", "abababababababababababa"));
    printf("%d\n", match("a*b*a", "ababababababababababab"));
    printf("-----------------------------------------\n");
    printf("%d\n", match("*b*", "babababababababababab"));
    printf("%d\n", match("a*????a", "atesta"));
    printf("%d\n", match("?***?", "xd"));
    printf("------------------------------------------\n");
    printf("%d\n", match("a***b", "addddddddddddb"));
    printf("%d\n", match("*c*a*", "ceeeeeea"));
    printf("%d\n", match("*a?", "ceeeeeea"));
    printf("%d\n", match("tes??k", "tescik"));

    return 0;
}
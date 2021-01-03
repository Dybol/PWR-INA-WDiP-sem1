
struct Wezeł {
    int wartosc;
    struct Wezeł* nastepny;
};

typedef struct Wezeł* Lista ;
void drukuj ( Lista wsk);
Lista dopisz_na_poczatek ( Lista wsk , int i);
void dopisz_na_koniec ( Lista * wsk , int i);
void usun ( Lista * wsk);
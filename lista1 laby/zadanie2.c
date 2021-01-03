#include <stdio.h>
#include <math.h>

int main()
{ // kompilowac - clang -o zadanie2 zadanie2.c -lm
    float a,b,c;
    printf("Wprowadz a,b,c - wspolczynniki rownania ax^2+bx+c=0\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    //Sprawdzanie skrajnych przypadkow
    if(a==0)
    {
        if(b==0 && c!=0)
        {
            printf("Brak rozwiazan, rownanie sprzeczne\n");
            return 0;
        }
        else if (b==0 && c==0)
        {
            printf("Rownanie tozsamosciowe\n");
            return 0;
        }
        else
        {            
            printf("To nie jest rownanie kwadratowe!\n");
            float x1 = -c / b;
            printf("x1 = %f\n", x1);
            return 0;
        }

    }
    //Jesli nie bylo skrajnych przypadkow, mozna przejsc do wyliczania pierwiastkow
    float delta = b*b - (4*a*c);

    if(delta > 0)
    {
        float pw_delta = sqrtf(delta);
        float x1, x2;
        x1 = (-b + pw_delta )/ 2*a;
        x2 = (-b - pw_delta )/ 2*a;
        printf("x1 = %f\n",x1);
        printf("x2 = %f\n",x2);
    }
    else if(delta == 0)
    {
        float x1 = -b/2*a;
        printf("x1 = %f\n",x1);
    }
    else
    {
        printf("Nie ma rozwiazania w zbiorze liczb rzeczywistych\n");
    }
    return 0;
    

}
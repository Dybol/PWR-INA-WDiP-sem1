#include <stdio.h>

int main(void)
{
    /*printf("A B R A K A D A B R A \n");
    printf(" A B R A K A D A B R \n");
    printf("  A B R A K A D A B \n");
    printf("   A B R A K A D A \n");
    printf("    A B R A K A D \n");
    printf("     A B R A K A \n");
    printf("      A B R A K \n");
    printf("       A B R A \n");
    printf("        A B R \n");
    printf("         A B \n");
    printf("          A \n");
*/   
    const char *slowo = "ABRAKADABRA"; //slowo
    const int dlugosc = 11; //dlugosc slowa
    int spacje = 0;  //ilosc spacji na poczatku kazdej linijki

    for (int i=dlugosc; i>0; i--) //petla wykona sie tyle razy ile wynosi dlugosc slowa
    { 
        for (int j=0; j<spacje; j++) //spacje(wciecia)
        { 
        printf(" ");
        }
        spacje++;

        for(int k=0;k<i;k++) 
        {
            printf("%c ", slowo[k]);  // wypisywanie napisu
        }
        printf("\n");
        
    }

    return 0;
}
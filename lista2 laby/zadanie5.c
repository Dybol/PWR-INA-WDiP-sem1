#include <stdio.h>
#include <math.h>

int nwd(int a, int b)
{
    if(b==0)
        return a;
    else if(a==0) 
        return b;
    else
    {
        if(a>b)
            return nwd(a%=b,b);
        else
            return nwd(a,b%=a);
    }

}

int wzglednie_pierwsze (int n)
{
    int ilosc = 0;

    for (int i = 1; i <= n; i++)
    {
        if(nwd(i,n) == 1)
        {
            ilosc++;
        }
    }
    ilosc*=2; //bo mozna je zamienic miejscami

    return ilosc;
}

int main()
{
    FILE *file;

    int tab[1001];
    tab[0] = 0;

    file = fopen("wykres.csv", "w");

    for (int i = 1; i <= 1000; i++)
    {
        tab[i] = tab[i-1] + wzglednie_pierwsze(i);
        fprintf(file, "%d, %lf \n", i,((double)(tab[i] - 1)/(double)(i * i)));
    }

    fclose(file);
    return 0;

}
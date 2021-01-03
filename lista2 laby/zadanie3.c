#include <stdio.h>

int main() //ogarnac niezmiennik petli
{
    double x = 0;
    int i = 0;
    while(x<=10) {
        i++;
        x+= (double) 1/i;
    }
    printf("%d\n",i); //P(i,x) <=> x = 1 + 1/2 + ... + 1/i
    return 0;
}

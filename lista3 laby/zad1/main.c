#include <stdio.h>
#include "funs.h"

int main() {
    char tab[] = {'c', 'd', 'c','d','c'};
    printf("%d\n", palindrom(tab));
    printf("%d\n", palindrom("KAJAKKAJAK"));
    printf("%d\n", palindrom("kobylamamalybok"));
    return 0;
}
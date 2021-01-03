#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "funs.h"

bool palindrom(char napis[]) {
    int length = strlen(napis);
    //printf("dlugosc: %d\n", length);
    for(int i = 0, j = length-1; i<length/2; i++, j--) {
        if(!(napis[i] == napis[j]))
            return false;
    }
    return true;
}

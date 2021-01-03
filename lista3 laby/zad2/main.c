#include <stdio.h>
#include "funs.h"

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
#include <stdio.h>
#include <assert.h>

void wyplata(int z, int g) {
    int counter;

    printf("    banknoty: \n");

    while(z>=10) {

        if(z/200>0) {
            counter = z/200;
            if(counter>0) {
                printf("\t%d x 200 zl\n", counter);
                z-=counter*200;
            }
        }

        else if(z/100>0) {
            counter = z/100;
            if(counter>0) {
                printf("\t%d x 100 zl\n", counter);
                z-=counter*100;
            }
        }

        else if(z/50>0) {
            counter = z/50;
            if(counter>0) {
                printf("\t%d x 50 zl\n", counter);
                z-=counter*50;
            }
        }

        else if(z/20>0) {
            counter = z/20;
            if(counter>0) {
                printf("\t%d x 20 zl\n", counter);
                z-=counter*20;
            }
        }

        else  {
            counter = z/10;
            if(counter>0) {
                printf("\t%d x 10 zl\n", counter);
                z-=counter*10;
            }
        }
    }

    printf("    monety: \n");

    while(z || g) {

        if(z/5>0) {
            counter = z/5;
            if(counter>0) {
                printf("\t%d x 5 zl\n", counter);
                z-=counter*5;
            }
        }

        else if(z/2>0) {
            counter = z/2;
            if(counter>0) {
                printf("\t%d x 2 zl\n", counter);
                z-=counter*2;
            }
        }
        else if (z/1>0) {
            counter = z/1;
            if(counter>0) {
                printf("\t%d x 1 zl\n", counter);
                z-=counter*1;
            }
        }

        else if(g/50>0) {
            counter = g/50;
            if(counter>0) {
                printf("\t%d x 50 gr\n", counter);
                g-=counter*50;
            }
        }

        else if(g/20>0) {
            counter = g/20;
            if(counter>0) {
                printf("\t%d x 20 gr\n", counter);
                g-=counter*20;
            }
        }

        else if(g/10>0) {
            counter = g/10;
            if(counter>0) {
                printf("\t%d x 10 gr\n", counter);
                g-=counter*10;
            }
        }

        else if(g/5>0) {
            counter = g/5;
            if(counter>0) {
                printf("\t%d x 5 gr\n", counter);
                g-=counter*5;
            }
        }

        else if(g/2>0) {
            counter = g/2;
            if(counter>0) {
                printf("\t%d x 2 gr\n", counter);
                g-=counter*2;
            }
        }

        else {
            counter = g/1;
            if(counter>0) {
                printf("\t%d x 1 gr\n", counter);
                g-=counter*1;
            }
        }
    }
}

int main()
{
    int a,b;
    printf("Podaj liczbe zlotych: ");
    scanf("%d",&a);
    printf("Podaj liczbe groszy: ");
    scanf("%d",&b);
    assert(b<100);
    /*if(b>=100) {
        printf("Liczba groszy powinan byc mniejsza niz 100");
        return 0;
    }*/

    wyplata(a,b);
    return 0;
}

#include <stdio.h>
#include "agents.h" 

struct agent newagent(int x, int y) {
    struct agent nowy = {x,y};
    return nowy;
};


int main() {
    struct agent Bob = newagent(0, 0);
    struct agent Alice = newagent(3, 3);
    north(&Bob);
    south(&Alice);
    west(&Alice);
    north(&Bob);
    east(&Bob);
    south(&Alice);
    printf("odległość = %f\n", distance(Bob , Alice));
    return 0;
}
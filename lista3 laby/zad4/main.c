#include <stdio.h>
#include <math.h>
#include "agents.h" 
struct agent newagent(int x, int y) {
    struct agent nowy = {x,y};
    return nowy;
};
void north(struct agent *a) {
    a->y += 1;
}
void south(struct agent *a) {
    a->y -= 1;
}
void west(struct agent *a) {
    a->x -= 1;
}
void east(struct agent *a) {
    a->x += 1;
}
double distance(struct agent a1, struct agent a2) {
    return(sqrt((a1.x - a2.x) * (a1.x - a2.x) + (a1.y - a2.y) * (a1.y - a2.y)));
}

int main() {
    struct agent Bob = newagent(0, 0);
    struct agent Alice = newagent(3, 3);
    north(&Bob);
    south(&Alice);
    west(&Alice);
    north(&Bob);
    east(&Bob);
    south(& Alice);
    printf("odległość = %f\n", distance(Bob , Alice));
    return 0;
}
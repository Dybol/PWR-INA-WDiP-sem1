#include "agents.h"

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
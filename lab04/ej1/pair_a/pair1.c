#include <stdio.h>
#include <stdlib.h>
#include "pair.h"

pair_t pair_new(int x, int y) {
    pair_t pr = {x,y};
    return pr;
}

int pair_first(pair_t p) {
    return p.fst;
}

int pair_second(pair_t p) {
    return p.snd;
}

pair_t pair_swapped(pair_t p) {
    pair_t pSwapped = {p.snd,p.fst};
    return pSwapped;
}

pair_t pair_destroy(pair_t p) {
    return p;
}


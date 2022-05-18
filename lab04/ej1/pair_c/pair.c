#include <stdio.h>
#include <stdlib.h>
#include "pair.h"

struct s_pair_t {
    int fst;
    int snd;
};

pair_t pair_new(int x, int y) {
    pair_t p;
    p = malloc(sizeof(struct s_pair_t));
    p->fst = x;
    p->snd = y;
    return p;
}

int pair_first(pair_t p) {
    return p->fst;
}

int pair_second(pair_t p) {
    return p->snd;
}

pair_t pair_swapped(pair_t p) {
    pair_t pSwapped;
    pSwapped = malloc(sizeof(struct s_pair_t));
    pSwapped->fst = p->snd;
    pSwapped->snd = p->fst;
    return pSwapped;
}

pair_t pair_destroy(pair_t p) {
    free(p);
    return p;
}
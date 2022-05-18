#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"

struct node {
  list_elem elem;
  struct node *next;
};

list empty_list(void) {
    return NULL;
}

list addl(list_elem x, list l) {
    struct node *t;
    t = malloc(sizeof(struct node));
    t->next = l;
    t->elem = x;
    return t;
}

list destroy(list l) {
    list pointerL = l;
    while (pointerL != NULL) {
        pointerL = l;
        l = l->next;
        free (pointerL); 
    }
    return l = NULL;
}

list addr(list_elem x,list l) {
    list l1;
    l1 = malloc(sizeof(struct node));
    l1->elem = x;
    l1->next = NULL;
    if (l != NULL) {
        list l2;
        l2 = l;
        while(l2->next != NULL) {
            l2 = l2->next;
        }
    l2->next = l1;
    }
    else {
        l = l1;
      
    }
    return l;
}

bool is_empty (list l) {
    return l == NULL;
}

list_elem head (list l) {
    assert(!is_empty(l));
    return l->elem;
}

list tail(list l) {
    assert(!is_empty(l));
    return l->next;
}

unsigned int length (list l) {
    unsigned int i = 0;
    list list = l;
    while(!(list == NULL)) {
        list = list->next;
        i = i+1;
    }
    return i;
}

void auxforConcat(list x, list y) {
  list p = x;
  while(p!=NULL) {
    addr(p->elem, y);
  }
}

list concat(list list0,list list1) {
    list x = empty_list();
    auxforConcat(list0, x);
    auxforConcat(list1, x);
    return x;
     
}

list_elem indexL(list l,unsigned int x) {
    assert(length(l) > x);
    list list = l;
    unsigned int i;
    while (!(l == NULL)) {
        for (i = 1;i < x; i++) {
            list = l->next;
            i = i+1;
        }
    }
    return list->elem;   
}

list take(list l,unsigned int x) {
    assert(length(l) >= x);
    if (l == NULL) {
        return NULL;
    } else {
        list list = l;
        unsigned int i = 1;
        while (i < x && list->next) {
            list = list->next;
            i = i+1;
        } 
        return list;
    }           
}

list drop(list l,unsigned int x) {
    assert(length(l) >= x);
    while (x >= 1) {
        l = l->next;
        x = x-1;
    }
    return l;
}

list copy_list(list l) {
    if (l == NULL) {
        return NULL;
    } else {
        list list = l;
        unsigned int i = 1;
        while (i < length(l)) {
            list = list->next;
            i = i+1;
        } 
        return list;
    } 

}




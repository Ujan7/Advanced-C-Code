#include <stdlib.h>
#include <assert.h>
#include "stack.h"
 
struct _s_stack {
  stack_elem elem;
  struct _s_stack *next;
};

struct _s_stack *isStack (stack_elem x) {
    struct _s_stack *pila = malloc(sizeof(struct _s_stack));
    pila->elem = x;
    pila->next = NULL;
    return pila;
}

stack stack_empty () {
    return NULL;
}

stack stack_push(stack s, stack_elem e) {
    struct _s_stack *stack = isStack(e);
    stack->next = s;
    return stack;

}

stack stack_pop(stack s) {
    struct _s_stack *stack = s;
    stack = stack->next;
    free(stack);
    return s;
}

unsigned int stack_size(stack s) {
    unsigned int contador = 0;
    struct _s_stack *pila = s;
    while (pila != NULL) {
        contador ++;
        pila = pila->next;
    }
    return contador;
}




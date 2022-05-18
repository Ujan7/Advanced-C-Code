#include <stdlib.h>
#include <stdio.h>

void absolute(int x, int *y) {

    if (x >= 0) {
        
        *y = x;
    } else {
        
        *y = -x;
    }
    
}

int main(void) {
    int a;
    int *pointer = NULL;

    printf("\nIngrese un valor para a, para calcular su valor absoluto:\n");
    scanf("%d",&a);

    pointer = &a;

    absolute(a,pointer);
    *pointer = a;

    printf("El valor absoluto de a, es %d\n",*pointer);

    return EXIT_SUCCESS;
}

#include <stdlib.h>
#include <stdio.h>

void absolute(int x,int y) {

    if (x >= 0) {

        y = x;
    } else {

        y = -x;
    } 
}

int main(void) {
    
    int a,b;
    b = 0;
    
    printf("\nIngrese un valor para a, pueden ser negativos o positivos\n");
    scanf("%d",&a);

    absolute(a,b);
    printf("%d",b);


    return EXIT_SUCCESS;
}  // ESTE ALGORITMO NO FUNCIONA (SIRVE CONCEPTUALMENTE PARA ENTENDER QUE LOS PROCEDIMIENTOS DIFIEREN EN TEORICO PRACTICO Y C)


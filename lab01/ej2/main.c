/* First, the standard lib includes, alphabetically ordered */
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000

unsigned int array_from_keyboard (int array[], unsigned int max_size)
{
    FILE *puntero;
    puntero = stdin;
    unsigned int size = max_size;
    unsigned int i;
    int aux;
     
    fscanf(puntero,"%u",&size);

    for (i = 0; i < size; i++) {

        fscanf(puntero,"%d",&aux);
        array[i] = aux;
    }
         
  return size;
}

void array_dump(int a[], unsigned int length) {
    
    printf("\n[");
    for (unsigned int i = 0; i < length; i++) {

        printf("%d",a[i]);
    }
    printf("]\n");

}


int main() {
    
    int array[MAX_SIZE];
    printf("\nIngrese porfavor, el tamano del arreglo, y pulse enter.Luego,ingrese los elementos del mismo y un enter de por medio.\n");
    unsigned int length = array_from_keyboard (array, MAX_SIZE);
    array_dump(array, length);
    return EXIT_SUCCESS;

}

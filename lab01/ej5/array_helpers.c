#include "array_helpers.h"
#include "mybool.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>


unsigned int array_from_file(int array[], unsigned int max_size, const char *filepath)
{
    FILE *puntero;
    puntero = fopen(filepath,"r");
    unsigned int size = max_size;
    unsigned int i;
    int aux;
    if (puntero == NULL) {

        size = 0;
        printf("\nNo se pudo leer el archivo\n");
    } 
    else {
           fscanf(puntero,"%u",&size);

           for (i = 0; i < size; i++) {

               fscanf(puntero,"%d",&aux);
               array[i] = aux;
              }
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

mybool array_is_sorted(int a[], unsigned int length)
{
   if (length <= 1)
   {
       return true; //SI EL TAMANO DEL ARREGLO ES CERO,O 1 YA ESTA ORDENADO.
   }

   if (a[length - 1] >= a[length - 2])
   {
       return array_is_sorted(a,length - 1);
   }
   
   return false;
   
}
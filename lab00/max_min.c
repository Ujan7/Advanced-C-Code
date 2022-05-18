//IMPORTANTE: gcc -Wall -Werror -Wextra - -std=c99
#include <stdio.h>  
#include <stdbool.h>  

#include <assert.h>   

#define ARRAY_SIZE 10

void pedirArreglo (int a[], int n_max) {

    int i;
    for (i = 0; i < n_max; i++) {

        scanf("%d",&a[i]);
    }
}

struct max_min_result {
    int max_value;
    int min_value;
    unsigned int max_position;
    unsigned int min_position;
};

struct max_min_result compute_max_min(int array[], unsigned int length)
{
    assert(length > 0);
    array = array;
    struct max_min_result result = { 0, 0, 0, 0 };
    result.max_value = 2;
    result.min_value = 2;

    result.max_value = array[0];
    result.min_value = array[0];
    result.max_position = 0;
    result.min_position = 0;

    unsigned int i;
    for (i = 0;i <length;i++){
        if (array[i] > result.max_value) {
            result.max_value = array[i];
            result.max_position = i;
        }
        if (array[i] < result.min_value) {
            result.min_value = array[i];
            result.min_position = i;
        }
    }

    return result;
}

int main(void)
{
    
    int n; 
    printf("\nIngrese porfavor, el tamano del arreglo y posteriormente el arrgelo\n");
    scanf("%d",&n);

    int a[n];

    pedirArreglo(a,n);


    struct max_min_result result = compute_max_min(a, n);
    printf("Máximo: %d\n", result.max_value);
    printf("Posición del máximo: %u\n", result.max_position);
    printf("Mínimo: %d\n", result.min_value);
    printf("Posición del mínimo: %u\n", result.min_position);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 20

int main(void) {
    char user_input[MAX_LENGTH];
    printf("Ingrese su nombre y apellido: ");
    fgets(user_input,MAX_LENGTH,stdin);
    user_input[strlen(user_input)-1] = '\0';
    printf("Te damos la bienvenida %s a este maravilloso programa!\n", user_input);
    return EXIT_SUCCESS;
}
/*A priori, lo que observo es que, en mi codigo, el scanf solo toma el nombre ingresado por el usuario.
Por esto, reemplazamos por fgets*/





#include <stdio.h>
#include <stdlib.h>

size_t string_length(const char *str) {
    unsigned int counter = 0;
    while (str[counter] != '\0') {
        counter++;
    }
    return counter;   
}
char *string_filter(const char *str, char c) {
    char *newstr = malloc(sizeof(str));
    unsigned int i,j = 0;
    for(i=0; i<string_length(str); i++) {
        if(str[i]!=c) {
            newstr[j] = str[i];
            j++;
        }
    }
    return newstr;
}
#include "stdio.h"
#include "string.h"
#include "ctype.h"
#define SIZE 10


/* 
 * This file has several examples of some functions in string,h
 * */


int main(void) {
    char greeting[SIZE] = "Hey, ";
    char new_greeting[SIZE];
    char name[SIZE];
    char big_str[150];

    printf("Name: ");
    fgets(name, SIZE, stdin); /* Gets the first SIZE (10) characters from stdin. */

    /* Copies val over to str */
    strcpy(new_greeting, greeting);
    printf("New greeting: %s\n", new_greeting);

    printf("After operation: %s\n", greeting);
    printf("Length: %lu\n", strlen(greeting));

    printf("########## CONCATENATION ##########\n");
    printf("Old str: %s\n", big_str);

    /* Concats str and val to big_str */
    strcat(big_str, greeting);
    strcat(big_str, name);
    printf("New value: %s\n", big_str);
    printf("Length: %lu\n", strlen(big_str));
} 

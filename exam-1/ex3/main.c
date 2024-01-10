#include <string.h>
#include <stdio.h>

#define DIM 14

void append(char s1[], const char s2[]);

int main( void ) {
    char name1[DIM] = "coelho";
    char name2[DIM] = "pato";


    append(name1, name2);

    printf("New string: %s\n", name1);

}

void append(char s1[], const char s2[]) {    
    strcat(s1, s2);
}

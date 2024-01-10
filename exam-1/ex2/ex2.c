#include <stdio.h>
#include <string.h>

void ex2(int initial, int decrement);

int main( void ) {
    int i = 10, j = 4;
    ex2(i, j);

    return 0;
}


void ex2(int initial, int decrement) {
    char input[4];
    while (initial > 0) {
        printf("Current value = %d Euro. Bid? (yes/no): ", initial);
        scanf("%s", input);

        if (!strcmp(input, "yes")) {
            printf("Auctioned at %d Euro.\n", initial);
            return;

        } else if (!strcmp(input, "no")) { 
            initial -= decrement;  
            
        } else {
            break;
        }
    }

    printf("Non auctioned.\n");
}


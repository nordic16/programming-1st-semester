#include <stdio.h>

void decompose(int);

int main(void) {
    int num;

    printf("Number: ");
    scanf("%d", &num);

    /* Makes sure the number is within the valid range. */
    if(num > 999 || num < 0) {
        printf("Invalid number!");
    
    } else {
        decompose(num);
    }
}


void decompose(int num) {
    printf("%d hundreds, ", num / 100);
    printf("%d tens, ", (num / 10) % 10);
    printf("%d units\n", num % 10);
}
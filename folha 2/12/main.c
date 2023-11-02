#include<stdio.h>

int soma_fatores(int);

int main(void) {
    int num;

    printf("Introduza um numero: ");
    scanf("%d", &num);

    if(num > 1) {
        printf("Soma dos divisores proprios de %d: %d\n", num, soma_fatores(num));
    
    } else {
        printf("Numero muito pequeno.\n");
    }

    return 0;
}


int soma_fatores(int num) {
    int sum = 0;
    int i;
    for(i = 2; i < num; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    return sum;
}
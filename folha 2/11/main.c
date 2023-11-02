#include<stdio.h>


int main(void) {
    int km = 0; 
    int i;
    double combustível;
    double total = 0;

    for (i = 0; 1 ; i++) {
        printf("Introduza os km percorridos pela viatura %d (-1 para terminar): ", i);
        scanf("%d", &km);

        if(km == -1) {
            break;
        }

        printf("Introduza a quantidade de combustivel consumido pela viatura: ");
        scanf("%lf", &combustível);

        total += km / combustível;

        printf("km/litro = %lf\n", km / combustível);
    }

    printf("RESPOSTA: Tem %d viaturas. A média de km/litro é: %lf", i, total / i);
}
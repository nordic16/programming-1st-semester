#include<stdio.h>

int main(void) {
    int sum = 0;
    int km;

    while(1) {
        printf("Introduza os km percorridos pela viatura: ");
        scanf("%d", &km);

        if (km == -1) {
            break;
        }

        sum += km;
    }

    printf("O total de km percorridos foram: %d", sum);
}
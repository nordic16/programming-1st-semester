#include <stdio.h>

void apply_corrections(int*, int*, int*);

int main( void ) {
    int hours, minutes, seconds, total_seconds;

    printf("Introduza o tempo em horas, minutos, segundos (HH mm ss): ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    apply_corrections(&hours, &minutes, &seconds);
    total_seconds = hours * 3600 + minutes * 60 + seconds;

    printf("After corrections: %dh %dm %ds\n", hours, minutes, seconds);
    printf("Total seconds elapsed: %ds\n ", total_seconds);
    
    return 0;
}

/*
    NOTE: REFERENCES DO NOT EXIST IN C.
*/
void apply_corrections(int* hours, int* minutes, int* seconds) {
    while (*seconds > 60) {
        *seconds -= 60;
        *minutes += 1;
    }

    while (*minutes > 60) {
        *minutes -= 60;
        *hours += 1;
    }
}
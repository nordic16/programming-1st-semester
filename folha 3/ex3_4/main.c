/*
Both ex3 and 4 all in one.
*/
#include <stdio.h>

int ex3(int, int, int);
void ex4(int);

int main(void) {
    int hours, min, secs;

    printf("Hours: ");
    scanf("%d", &hours);

    printf("Minutes: ");
    scanf("%d", &min);

    printf("Seconds: ");
    scanf("%d", &secs);


    printf("#################### EX 3. ####################\n");
    printf("Seconds: %d\n", ex3(hours, min, secs));
    printf("#################### EX 4. ####################\n");
    ex4(secs);

    return 0;
}

/*
Solves exercise 3.    
*/
int ex3(int hours, int min, int secs) {
    /* converts seconds to minutes. */
    for(; hours > 0; hours--) {
        secs += 3600;
    }

    for (; min > 0; min--) {
        secs += 60;
    }

    return secs;

}


/*
Solves exercise 4.
*/
void ex4(int secs) {
    int min = 0;
    int hours = 0;

    printf("Seconds: ");
    scanf("%d", &secs);

    for (; secs >= 60; secs-=60) {
        min += 1;
    }

    for (; min >= 60; min-=60) {
        hours += 1;
    }

    printf("Result: %dh %dm %ds\n", hours, min, secs);
}
#include <stdio.h>
#include <math.h>

/* Prototype */
float expr(int, int, int, int);

int main(void) {
    int x2, x1, y2, y1;

    printf("Valor de x1: ");
    scanf("%d", &x1);

    printf("Valor de x2: ");
    scanf("%d", &x2);

    printf("Valor de y1: ");
    scanf("%d", &y1);

    printf("Valor de y2: ");
    scanf("%d", &y2);

    /* output formatting: prints result with only 4 decimal places. */
    printf("Resultado: %.4f\n", expr(x1, x2, y1, y2));
}

/* returning a double here would be overkill: float's precision is enough. */
float expr(int x1, int x2, int y1, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
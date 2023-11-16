#include <stdio.h>
#include <stdlib.h>
#define DIMENSAO 9


void alinea_a(int*); 
void printArray(int*, size_t); /* para tornar o código menos repetitivo. */
void alinea_c(int*, size_t);
int alinea_j(int*, size_t);
int alinea_m(int*, size_t, int);

int main(void) {
    size_t len;
    int values[DIMENSAO] = {0};
    int val;

    alinea_a(values);
  
    /* Verificação */
    printArray(values, DIMENSAO);

    printf("################################\n");
    printf("Introduza o tamanho do array: ");
    scanf("%zu", &len);
    alinea_c(values, len);

    /* verificação */
    printArray(values, len);
    printf("################################\n");   
    printf("Valor mínimo: %d\n", alinea_j(values, len));

    /* Verificação */
    printArray(values, len);
    printf("################################\n");  
    printf("Introduza um inteiro: ");
    scanf("%d", &val);
    printf("Ultima ocorrencia de %d: %d\n", val, alinea_m(values, DIMENSAO, val));

    /* Verificação */
    printArray(values, DIMENSAO);

    return 0;
}


void alinea_a(int* vals) {
    int i;
    for(i = 0; i < DIMENSAO; i++) {
        *vals = (i + 1) * (i + 1);
        vals++;
    }
}


void alinea_c(int* vals, size_t len) {
    if(len > DIMENSAO) {
        printf("Tamanho superior a %d!\n", DIMENSAO);
        exit(-1); /* -1 indica um erro. */
    }

    int i;
    for(i = 0; i < len; i++) {
        /* Parentesis necessários, visto que ++ precede *. */
        (*vals)++;
        vals++;
  }
}


/* Alinea e (pelos vistos) */
void printArray(int* array, size_t len) {
    int i = 0;
    for(i = 0; i < len; i++) {
        /* Pós incremento usado para avançar para o próximo elemento do array. */
        printf("(%d) - %d\n", i, *(array++));
    }
}


int alinea_j(int* vals, size_t len) {
    int min = *vals;
    vals++; /* Como assumimos que min = vals[0], não é necessário iterar sobre a posição 0. */
    
    int i;
    for(i = 1; i < len; i++) {
        if(*vals < min) {
            min = *vals;
        }
        vals++;
    }

    return min;
}


int alinea_m(int* values, size_t len, int val) {
    int max = -1; /* Valor default */
    int i;

    for(i = 0; i < len; i++) {
        if(*values == val) {
            max = i;
        }

        values++;
    }

    return max;
}


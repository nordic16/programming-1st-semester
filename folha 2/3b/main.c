#include <stdio.h>

/* Protótipo! No protótipo de uma função, basta apenas enunciar o tipo de dados 
e a quantidade (neste caso 2), por isso não foi necessário dar os nomes "n" e "k"
às variáveis.
*/
int pow(int, int); 

int main(void) {
    int base;
    int exp; 

    printf("Introduza o valor de n: ");
    scanf("%d", &base);

    printf("Introduza o valor de k tal que %d^k: ", base);
    scanf("%d", &exp);

    printf("Resultado final (%d^%d): %d\n", base, exp, pow(base, exp));
}

/* n e k são argumentos e, por isso, locais a pow. */
int pow(int n, int k) {
    int total;

    for(total = 1; k > 0; k--) { /* Enquanto k for maior que 0 */
        total *= n; /* total será igual a si próprio * n */
    }
    
    return total;
}
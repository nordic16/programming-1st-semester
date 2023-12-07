#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 12 //MUST BE 11 DUE TO '\0'


void fill_arr(char[], char[]);
int is_valid(char[]);

int main() {
    char cad1[MAX_SIZE], cad2[MAX_SIZE];
    fill_arr(cad1, cad2);
    
    if (is_valid(cad1) && is_valid(cad2)) {
        
    } else {
      printf("Invalid.");
    }

    return 0; 
}

/*
 * Checks for the validity of a given pair
 */
int verifyPair(char ch1, char ch2) {
    int condition = (ch1 == 'T' && ch2 == 'A') ||
        (ch1 == 'A' && ch2 == 'T') ||
        (ch1 == 'C' && ch2 == 'G') ||
        (ch1 == 'G' && ch2 == 'C');
    
    return condition;
}


/* 
 * Checks for invalid strands. 
 */
int is_valid(char cad1[]) {
    int i;

    for (i = 0; cad1[i] != '\0'; i+=2) {
      /* First, check for any non-uppercase letters and other non-allowed chars. */
        int valid = (isalpha(cad1[i]) && isupper(cad1[i]) && 
          (cad1[i] == 'A' || cad1[i] == 'T' || cad1[i] == 'C' || cad1[i] == 'G')); 


        if (!valid || !verifyPair(cad1[i], cad1[i+1])) {
            return 0; 
        }
    }

    return 1;
}


void fill_arr(char cad1[], char cad2[]) { 
    printf("Cadeia 1 (tamanho %d): ", MAX_SIZE - 2);
    scanf("%10s", cad1);

    printf("Cadeia 2 (DO MESMO TAMANHO): ");
    scanf("%10s", cad2);
}

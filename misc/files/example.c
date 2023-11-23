#include <stdio.h>
#include <stdlib.h>
#define NUM_OF_LINES 5

void stat_lines(FILE*);
void get_contents(char[][1024], FILE*);
int get_num_lines(FILE*);

int main() {
    FILE* f = NULL;

    if ((f = fopen("file.txt", "r")) != NULL) {
        printf("File exists! Reading\n");

        stat_lines(f); 
        rewind(f);

        char lines[NUM_OF_LINES][1024];
        get_contents(lines, f);

        int i;      
        for (i = 0; i < NUM_OF_LINES; i++) {
            printf("%s", lines[i]);
        }

        fclose(f);
    }

    return 0;
}


/* 
 * Stats lines from file
*/
void stat_lines(FILE* fPtr) {
    char buf[1024];
    
    while (fgets(buf, sizeof(buf), fPtr) != NULL) {
        printf("%s", buf);
    }  
}


/*
 * Reads all lines from fPtr
*/
void get_contents(char lines[][1024], FILE* fPtr) {
    int max = get_num_lines(fPtr);
    rewind(fPtr);

    int i;
    for (i = 0; i < max; i++) {
        fgets(lines[i], 1024, fPtr);
  }
}


/* 
 * Gets number of lines
 */
int get_num_lines(FILE* fPtr) {
    int i = 0;
    char buf[1024];

    while(fgets(buf, sizeof(buf), fPtr)) {
        i++;
    }

    return i;
}

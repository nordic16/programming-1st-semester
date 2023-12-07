#include <stdio.h>
#define SIZE 10

void initialize_array(int[], int);
void max_and_pos(const int[], int, int*, int*);


int main() {
    int arr[SIZE];
    int max;
    int maxPos = -1;

    initialize_array(arr, SIZE);
    max_and_pos(arr, SIZE, &max, &maxPos);

    printf("\nMax value: %d\nPosition: %d", max, maxPos); 
}


void max_and_pos(const int arr[], int size, int* ptrMax, int* ptrMaxPos) {
    int i; 
    *(ptrMax) = arr[0];

    for (i = 0; i < size; i++) {
        if(arr[i] > *ptrMax) {
            *ptrMax = arr[i];
            *ptrMaxPos = i + 1; /* i + 1 for pos, i for index. */
        }
    }
}


void initialize_array(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("Value %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
}

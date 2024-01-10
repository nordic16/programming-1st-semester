#include <stdio.h>
#include <math.h>

#define SIZE 5

/* a */
float chebyshev(double v1[], double v2[], int dim);
/* b */
int nDist(double v1[], double v2[], int dim, double n);

int main( void ) {
    double v1[] = {1.0, 0.0, -2.5, 9.0, 3};
    double v2[] = {2.0, 1.0, 6.0, 12.0, 3.0};

    printf("Chebyshev distance between two vectors: %.2f\n", chebyshev(v1, v2, SIZE));

    if(nDist(v1, v2, SIZE, 8.0)) {
        printf("The vectors are more than 8.0 positions away from each other.\n");
    }

    return 0;
}


int nDist(double v1[], double v2[], int dim, double n) {
    float cDist = chebyshev(v1, v2, dim);

    return 1 ? cDist > n : 0;
}



float chebyshev(double v1[], double v2[], int dim) {
    float max = 0.0;
    int i = 0;
    float diff = 0.0;

    for (i = 0; i < dim; i++) {
        diff = fabs(v1[i] - v2[i]);
        if (diff > max) {
            max = diff; 
        }
    }

    return max;
}

#include <stdio.h>

int main() {
    int A[] = {0, 1, 2, 3, 4, 5};
    int B[] = { 5, 4, 3, 2, 1, 0};
    int n = sizeof(A) / sizeof(A[0]); // Assuming both arrays have the same size

    int maxA = A[0];
    int maxB = B[0];

    for (int i = 1; i < n; i++) {
        if (A[i] > maxA) {
            maxA = A[i];
        }
        if (B[i] > maxB) {
            maxB = B[i];
        }
    }

    printf("Maximum element in array A is: %d\n", maxA);
    printf("Maximum element in array B is: %d\n", maxB);

    return 0;
}

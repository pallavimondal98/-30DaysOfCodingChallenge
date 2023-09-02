#include <stdio.h>

int main() {
    int A[] = {0, 1, 2, 3, 4, 5};
    int B[] = {5, 4, 3, 2, 1, 0};
    int n = sizeof(A) / sizeof(A[0]); // Assuming both arrays have the same length

    int minA = A[0]; // Initialize minA with the first element of A
    int minB = B[0]; // Initialize minB with the first element of B

    for (int i = 1; i < n; i++) {
        if (A[i] < minA) {
            minA = A[i];
        }
        if (B[i] < minB) {
            minB = B[i];
        }
    }

    printf("Minimum element in array A: %d\n", minA);
    printf("Minimum element in array B: %d\n", minB);

    return 0;
}

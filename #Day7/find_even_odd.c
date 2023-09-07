#include <stdio.h>

int main() {
    int A[] = {1, 2, 5, 4, 0};
    int n = sizeof(A) / sizeof(A[0]);

    int B[100]; // Array for even numbers
    int C[100]; // Array for odd numbers
    int bCount = 0; // Counter for even numbers
    int cCount = 0; // Counter for odd numbers

    // Separate even and odd numbers into arrays B and C
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            B[bCount] = A[i];
            bCount++;
        } else {
            C[cCount] = A[i];
            cCount++;
        }
    }

    printf("Array A: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    
    printf("\nEven numbers (B): ");
    for (int i = 0; i < bCount; i++) {
        printf("%d ", B[i]);
    }

    printf("\nOdd numbers (C): ");
    for (int i = 0; i < cCount; i++) {
        printf("%d ", C[i]);
    }

    printf("\n");

    return 0;
}

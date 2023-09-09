#include <stdio.h>

int main() {
    int A[] = {1, 1, 1, 1, 1};
    int B[] = {2, 2, 2, 2, 2};
    int n = sizeof(A) / sizeof(A[0]); // Assuming both arrays have the same length
    int C[n];

    // Calculate the sum of the merged array
    for (int i = 0; i < n; i++) {
        C[i] = A[i] + B[i];
    }

    // Print the merged array
    printf("Merged Array (C[]): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

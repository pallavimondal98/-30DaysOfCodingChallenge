#include <stdio.h>

int main() {
    int A[] = {0, 1, 2, 3, 4, 5};
    int B[] = {5, 4, 3, 2, 1, 0};
    int C[6];  // Assuming both arrays have the same length

    int length = sizeof(A) / sizeof(A[0]);  // Calculate the length of the arrays

    // Calculate the sum of corresponding elements and store it in array C
    for (int i = 0; i < length; i++) {
        C[i] = A[i] + B[i];
    }

    // Display the result
    printf("Sum of arrays A and B:\n");
    for (int i = 0; i < length; i++) {
        printf("%d + %d = %d\n", A[i], B[i], C[i]);
    }

    return 0;
}

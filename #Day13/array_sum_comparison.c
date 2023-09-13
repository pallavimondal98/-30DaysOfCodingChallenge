#include <stdio.h>

int main() {
    int A[] = {0, 1, 2, 3, 4, 5};
    int B[] = {5, 4, 3, 2, 1, 0};
    int length = sizeof(A) / sizeof(A[0]);
    int sumA = 0, sumB = 0;
    
    // Calculate the sums of both arrays
    for (int i = 0; i < length; i++) {
        sumA += A[i];
        sumB += B[i];
    }
    
    printf("Sum of A: %d\n", sumA);
    printf("Sum of B: %d\n", sumB);
    
    if (sumA == sumB) {
        printf("The sums are equal.\n");
    } else if (sumA > sumB) {
        printf("Array A has a bigger sum.\n");
    } else {
        printf("Array B has a bigger sum.\n");
    }
    
    return 0;
}

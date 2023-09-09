#include <stdio.h>

int main() {
    int A[] = {0, 1, 2, 3, 4, 5};
    int B[] = {5, 4, 3, 2, 1, 0};
    int n = sizeof(A) / sizeof(A[0]); // Assuming both arrays have the same length

    int product = 0;
    
    for (int i = 0; i < n; i++) {
        product += A[i] * B[i];
    }

    printf("The product of the merged arrays is: %d\n", product);

    return 0;
}

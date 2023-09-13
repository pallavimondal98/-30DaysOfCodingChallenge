#include <stdio.h>

int main() {
    int A[] = {0, 1, 2, 3, 4, 5};
    int B[] = {5, 4, 3, 2, 1, 0};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    printf("Common elements between A[] and B[] are: ");

    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                break; // Once a common element is found, break the inner loop
            }
        }
    }

    printf("\n");

    return 0;
}

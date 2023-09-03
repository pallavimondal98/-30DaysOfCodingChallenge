#include <stdio.h>

int main() {
    int A[] = {0, 1, 2, 3, 4, 5};
    int B[] = {5, 4, 3, 2, 1, 0};
    int size_A = sizeof(A) / sizeof(A[0]);
    int size_B = sizeof(B) / sizeof(B[0]);

    printf("Duplicate elements between A and B are: ");

    for (int i = 0; i < size_A; i++) {
        for (int j = 0; j < size_B; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                break; // Break to avoid printing the same duplicate multiple times
            }
        }
    }

    printf("\n");

    return 0;
}

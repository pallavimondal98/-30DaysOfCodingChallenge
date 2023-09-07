#include <stdio.h>

int main() {
    int A[] = {0, 1, 2, 3, 4, 5};
    int B[] = {5, 4, 3, 2, 1, 0};
    int size_A = sizeof(A) / sizeof(A[0]);
    int size_B = sizeof(B) / sizeof(B[0]);

    int size_C = size_A + size_B;
    int C[size_C];

    // Copy elements from A to C
    for (int i = 0; i < size_A; i++) {
        C[i] = A[i];
    }

    // Copy elements from B to C
    for (int i = 0; i < size_B; i++) {
        C[size_A + i] = B[i];
    }

    // Display the merged array C
    printf("Merged Array C[] = {");
    for (int i = 0; i < size_C; i++) {
        printf("%d", C[i]);
        if (i < size_C - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}


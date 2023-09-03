#include <stdio.h>

int areArraysEqual(int A[], int B[], int size) {
    for (int i = 0; i < size; i++) {
        if (A[i] != B[i]) {
            return 0; // Arrays are not equal
        }
    }
    return 1; // Arrays are equal
}

int main() {
    int A1[] = {1, 2, 5, 4, 0};
    int B1[] = {1, 2, 5, 4, 0};
    int size1 = sizeof(A1) / sizeof(A1[0]);

    int A2[] = {1, 2, 3, 4, 5};
    int B2[] = {11, 22, 33, 44};
    int size2 = sizeof(A2) / sizeof(A2[0]);

    if (areArraysEqual(A1, B1, size1)) {
        printf("Testcase 1: Arrays are equal.\n");
    } else {
        printf("Testcase 1: Arrays are not equal.\n");
    }

    if (areArraysEqual(A2, B2, size2)) {
        printf("Testcase 2: Arrays are equal.\n");
    } else {
        printf("Testcase 2: Arrays are not equal.\n");
    }

    return 0;
}

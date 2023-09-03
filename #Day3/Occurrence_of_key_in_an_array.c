#include <stdio.h>

int main() {
    int key = 6;
    int A[] = {0, 1, 2, 3, 4, 6};
    int B[] = {5, 4, 3, 2, 1, 0};
    int sizeA = sizeof(A) / sizeof(A[0]); // Calculate the size of array A
    int sizeB = sizeof(B) / sizeof(B[0]); // Calculate the size of array B

    // Check array A for the key
    int foundA = 0;
    for (int i = 0; i < sizeA; i++) {
        if (A[i] == key) {
            foundA = 1;
            break;          // Key found, exit the loop
        }
    }

    // Check array B for the key
    int foundB = 0;
    for (int i = 0; i < sizeB; i++) {
        if (B[i] == key) {
            foundB = 1;
            break;          // Key found, exit the loop
        }
    }

    // Print the results
    if (foundA) {
        printf("Key %d found in array A.\n", key);
    } else {
        printf("Key %d not found in array A.\n", key);
    }

    if (foundB) {
        printf("Key %d found in array B.\n", key);
    } else {
        printf("Key %d not found in array B.\n", key);
    }

    return 0;
}

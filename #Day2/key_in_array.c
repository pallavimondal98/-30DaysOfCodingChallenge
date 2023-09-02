#include <stdio.h>

int main() {
    int k;
    
    // Test case 1
    k = 2;
    int A[] = {1, 2, 5, 4, 0};
    int n = sizeof(A) / sizeof(A[0]);
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] == k) {
            found = 1;
            break; // Key found, exit the loop
        }
    }

    if (found) {
        printf("Key %d found in array A.\n", k);
    } else {
        printf("Key %d not found in array A.\n", k);
    }

    // Test case 2
    k = 11;
    int B[] = {11, 22, 33, 44};
    n = sizeof(B) / sizeof(B[0]);
    found = 0;

    for (int i = 0; i < n; i++) {
        if (B[i] == k) {
            found = 1;
            break; // Key found, exit the loop
        }
    }

    if (found) {
        printf("Key %d found in array B.\n", k);
    } else {
        printf("Key %d not found in array B.\n", k);
    }

    return 0;
}

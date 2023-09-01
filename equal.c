#include <stdio.h>

int main() {
    int A[] = {1, 2, 5, 4, 0};
    int B[] = {1, 2, 5, 4, 0};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    
    if (sizeA != sizeB) {
        printf("Arrays are not equal (different sizes)\n");
        return 0;
    }
    
    int equal = 1; // Assume arrays are equal until proven otherwise

    for (int i = 0; i < sizeA; i++) {
        if (A[i] != B[i]) {
            equal = 0; // Arrays are not equal
            break;
        }
    }

    if (equal) {
        printf("Arrays are equal\n");
    } else {
        printf("Arrays are not equal\n");
    }

    return 0;
}

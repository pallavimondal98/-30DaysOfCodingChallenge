#include <stdio.h>

int main() {
    int A[] = {0, 1, 2, 3, 4};
    int l = sizeof(A) / sizeof(A[0]);  //"l" for lemgth
    int B[l]; // Create a new array to store the reversed elements

    // Reverse the array
    for (int i = 0; i < l; i++) {
        B[i] = A[l - 1 - i];
    }

    // Print the reversed array
    printf("Reversed Array B: {");
    for (int i = 0; i < l; i++) {
        printf("%d", B[i]);
        if (i < l - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}







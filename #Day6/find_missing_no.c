#include <stdio.h>

int main() {
    int A[] = {0, 1, 2, 6, 4, 5};
    int B[] = {5, 4, 3, 2, 9, 0};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);

    // Create a flag array to mark elements in B as found
    int found[m];
    for (int i = 0; i < m; i++) {
        found[i] = 0;
    }

    // Iterate through A and mark elements in B as found
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                found[j] = 1;
                break; // Exit the inner loop once found
            }
        }
    }

    // Find and print the missing number(s)
    printf("Missing number(s) in B: ");
    for (int i = 0; i < m; i++) {
        if (found[i] == 0) {
            printf("%d ", B[i]);
        }
    }
    printf("\n");

    return 0;
}

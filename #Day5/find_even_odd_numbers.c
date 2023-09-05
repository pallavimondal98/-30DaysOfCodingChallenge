#include <stdio.h>

int main() 
{
    int A[] = {1, 2, 5, 4, 0};
    int B[100]; // Assuming a maximum of 100 elements in the array
    int C[100]; // Assuming a maximum of 100 elements in the array

    int n = sizeof(A) / sizeof(A[0]);
    int bCount = 0; // Counter for even numbers
    int cCount = 0; // Counter for odd numbers

    // Separate even and odd numbers into arrays B and C
    for (int i = 0; i < n; i++) 
    {
        if (A[i] % 2 == 0) 
        {
            B[bCount] = A[i];
            bCount++;
        } else 
        {
            C[cCount] = A[i];
            cCount++;
        }
    }

    printf("Even numbers: ");
    for (int i = 0; i < bCount; i++) 
    {
        printf("%d ", B[i]);
    }

    printf("\nOdd numbers: ");
    for (int i = 0; i < cCount; i++) 
    {
        printf("%d ", C[i]);
    }

    printf("\n");

    return 0;
}

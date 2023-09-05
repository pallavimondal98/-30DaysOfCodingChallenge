#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    int temp;
    int swapped;

    do 
    {
        swapped = 0;
        for (int i = 0; i < n - 1; i++) 
        {
            if (arr[i] > arr[i + 1]) 
            {
                // Swap arr[i] and arr[i+1]
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
        }
    } while (swapped);
}

int main() 
{
    int A[] = {0, 1, 2, 3, 4, 5};
    int B[] = {5, 4, 3, 2, 1, 0};
    int n = sizeof(A) / sizeof(A[0]);

    // Sort array A
    bubbleSort(A, n);

    // Sort array B
    bubbleSort(B, n);

    // Print sorted arrays
    printf("Sorted A[]: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Sorted B[]: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}

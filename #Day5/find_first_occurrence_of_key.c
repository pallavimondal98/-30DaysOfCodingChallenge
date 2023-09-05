#include <stdio.h>

int findFirstOccurrence(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index of the first occurrence of the key
        }
    }
    
    // If the key is not found, return -1 to indicate it's not in the array
    return -1;
}

int main() 
{
    int A[] = {0, 1, 2, 3, 4, 5};
    int B[] = {5, 4, 3, 2, 1, 0};
    int n = sizeof(A) / sizeof(A[0]);
    int key = 1;

    int indexA = findFirstOccurrence(A, n, key);
    int indexB = findFirstOccurrence(B, n, key);

    if (indexA != -1) 
    {
        printf("Key %d found in A[] at index %d\n", key, indexA);
    } else 
    {
        printf("Key %d not found in A[]\n", key);
    }

    if (indexB != -1) 
    {
        printf("Key %d found in B[] at index %d\n", key, indexB);
    } else 
    {
        printf("Key %d not found in B[]\n", key);
    }

    return 0;
}

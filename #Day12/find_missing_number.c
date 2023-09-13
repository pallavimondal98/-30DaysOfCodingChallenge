#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int totalSum = (n * (n + 1)) / 2; // Sum of all numbers from 1 to n
    int arraySum = 0;

    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }

    return totalSum - arraySum;
}

int main() {
    int arr[99]; // Array with 99 elements (missing one number)
    
    // Fill the array with numbers from 1 to 100, excluding the missing number (e.g., 42).
    for (int i = 0, j = 1; i < 99; i++, j++) {
        if (j == 42) {
            j++; // Skip the missing number (e.g., 42)
        }
        arr[i] = j;
    }

    int missingNumber = findMissingNumber(arr, 100);
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}


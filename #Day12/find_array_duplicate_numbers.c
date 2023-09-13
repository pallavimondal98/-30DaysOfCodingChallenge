#include <stdio.h>

void findDuplicates(int arr[], int size) {
    printf("Duplicate numbers in the array: ");
    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break; // Break to avoid printing the same duplicate again
            }
        }
    }
    
    printf("\n");
}

int main() {
    int A1[] = {1, 2, 5, 4, 0};
    int size1 = sizeof(A1) / sizeof(A1[0]);

    int A2[] = {1, 2, 3, 4, 5};
    int size2 = sizeof(A2) / sizeof(A2[0]);

    printf("Testcase 1: ");
    findDuplicates(A1, size1);
    printf("\n");

    printf("Testcase 2: ");
    findDuplicates(A2, size2);
    printf("\n");

    return 0;
}



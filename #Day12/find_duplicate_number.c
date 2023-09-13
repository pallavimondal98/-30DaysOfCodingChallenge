#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 3, 5}; // Example array with a duplicate (4)
    int size = sizeof(arr) / sizeof(arr[0]);
    int duplicate = -1;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                duplicate = arr[i];
                break;
            }
        }
        if (duplicate != -1) {
            break;
        }
    }

    if (duplicate != -1) {
        printf("Duplicate number is: %d\n", duplicate);
    } else {
        printf("No duplicate found.\n");
    }

    return 0;
}


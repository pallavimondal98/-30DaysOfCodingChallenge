#include <stdio.h>

int findSingleElement(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        // Check if the middle element is the same as its neighbors
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
            return arr[mid];
        }
        
        // Adjust the search range based on whether the single element is on the left or right side
        if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) || (mid % 2 == 1 && arr[mid] == arr[mid - 1])) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return arr[left]; // If not found yet, the single element is at the left index
}

int main() {
    int testcase1[] = {1, 1, 3, 3, 3, 0};
    int size1 = sizeof(testcase1) / sizeof(testcase1[0]);
    int result1 = findSingleElement(testcase1, size1);
    printf("Testcase 1: %d\n", result1);

    int testcase2[] = {1, 2, 2, 2, 2, 2, 2};
    int size2 = sizeof(testcase2) / sizeof(testcase2[0]);
    int result2 = findSingleElement(testcase2, size2);
    printf("Testcase 2: %d\n", result2);

    return 0;
}


#include <stdio.h>

// Function to merge two arrays
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;
    
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
    while (i < size1) {
        merged[k++] = arr1[i++];
    }
    
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int size1 = 5;
    int arr1[] = {1, 2, 5, 4, 0};
    
    int size2 = 5;
    int arr2[] = {1, 2, 3, 4, 5};
    
    int merged[10]; // Assuming the maximum size of merged array
    
    mergeArrays(arr1, size1, arr2, size2, merged);
    
    int mergedSize = size1 + size2;
    
    if (mergedSize % 2 == 1) {
        int middleIndex = mergedSize / 2;
        int middleElement = merged[middleIndex];
        printf("Middle element: %d\n", middleElement);
    } else {
        int middleIndex1 = (mergedSize - 1) / 2;
        int middleIndex2 = middleIndex1 + 1;
        int middleElement1 = merged[middleIndex1];
        int middleElement2 = merged[middleIndex2];
        printf("Middle elements: %d, %d\n", middleElement1, middleElement2);
    }
    
    return 0;
}

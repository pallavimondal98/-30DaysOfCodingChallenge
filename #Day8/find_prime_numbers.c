#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int A1[] = {1, 2, 5, 4, 0};
    int A2[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(A1) / sizeof(A1[0]);
    int n2 = sizeof(A2) / sizeof(A2[0]);

    printf("Prime numbers in Testcase 1:\n");
    for (int i = 0; i < n1; i++) {
        if (isPrime(A1[i])) {
            printf("%d ", A1[i]);
        }
    }

    printf("\nPrime numbers in Testcase 2:\n");
    for (int i = 0; i < n2; i++) {
        if (isPrime(A2[i])) {
            printf("%d ", A2[i]);
        }
    }

    return 0;
}

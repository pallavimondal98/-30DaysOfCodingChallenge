#include <stdio.h>
#include <string.h>

void revstr(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char s[] = "abc";
    printf("Original string: %s\n", s);

     revstr(s);

    printf("Reversed string: %s\n", s);

    return 0;
}

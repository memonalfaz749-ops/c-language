#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    /* find length manually */
    while (str[i] != '\0') {
        i++;
    }
    j = i - 1;   // last index

    /* compare characters */
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("String is a palindrome");
    else
        printf("String is NOT a palindrome");

    return 0;
}


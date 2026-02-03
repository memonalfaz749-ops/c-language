#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, flag = 1;
    int freq[256] = {0};   // for ASCII characters

    printf("Enter a string: ");
    scanf("%s", str);

    /* find length manually */
    while (str[i] != '\0') {
        i++;
    }
    j = i - 1;

    /* palindrome check */
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("\nString is a palindrome\n");
    else
        printf("\nString is NOT a palindrome\n");

    /* frequency counter */
    i = 0;
    while (str[i] != '\0') {
        freq[str[i]]++;
        i++;
    }

    printf("\nCharacter Frequency:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("%c = %d\n", i, freq[i]);
        }
    }

    return 0;
}


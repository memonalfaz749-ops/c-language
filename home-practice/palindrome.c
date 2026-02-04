#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, flag = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    //  length 
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

    if (flag == 1){
    	printf("The given string is a palindrome");
	}
        
    else{
    	printf("The given string is NOT a palindrome");
	}

    return 0;
}


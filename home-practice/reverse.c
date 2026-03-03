#include <stdio.h>

int main() {
    
    int num, temp, reverse = 0, digit;

    printf("Enter number: ");
    scanf("%d", &num);

    /* Even or Odd */
    if(num % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");

    /* Positive, Negative or Zero */
    if(num > 0)
        printf("Number is Positive\n");
    else if(num < 0)
        printf("Number is Negative\n");
    else
        printf("Number is Zero\n");

    /* Reverse Logic */
    temp = num;

    if(temp < 0)
        temp = -temp;   // make positive for reversing

    while(temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if(num < 0)
        reverse = -reverse;  // make reverse negative again

    printf("Reverse is: %d", reverse);

    return 0;
}

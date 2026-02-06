#include<stdio.h>

int sum(int n);

int main (){
    printf("Sum is : %d", sum(5));
    return 0;
}

int sum(int n){
    if(n == 0){
        return 0;
    }
    return n + sum(n - 1);
}


#include<stdio.h>
int main(){
	
	int number[50];
	
	printf("Enter any number :");
	scanf("%d",&number);
	
	if(number[50] % 2 != 0){
		printf("Given number is even number :");
	}
	else{
		printf("Given number is odd number.!!");
	}
	
	
	return 0;
}

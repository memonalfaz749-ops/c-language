#include<stdio.h>
void sum(){
	int first,second;
	
	printf("\nEnter first number :");
	scanf("%d",&first);
	
	printf("\nEnter second number :");
	scanf("%d",&second);
	
	printf("sum of two number is :%d",first+second);
}
void main(){
	
	printf("This program is make to do sum");
	sum();
	
	return 0;
}

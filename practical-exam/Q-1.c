#include<stdio.h>
int main (){
	
	int num,first,last,sum=0;
	
	printf("Enter 3 digit number :");
	scanf("%d",&num);
	
	first = num / 100 ;
	
	last = num % 10 ;
	
	sum = first + last ;
	
	
	printf("\nSum of first and last digit is : %d",sum);
	
	return 0;
}

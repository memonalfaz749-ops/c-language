#include<stdio.h>
#include<conio.h>
int main(){
	
	int num,last,first;
	
	printf("Enter any number :");
	scanf("%d",&num);
	
	last=num % 10;
	
	while(num>=10){
		num=num / 10;
	}
	first=num;
	
	printf("The sum of the first and the last digit :%d",first+last);
	
	
	return 0;
}

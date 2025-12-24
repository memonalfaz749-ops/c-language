#include<stdio.h>
#include<conio.h>
int main(){
	int num;
	
	printf("enter a number :");
	scanf("%d",&num);
	
	if(num<0){
		printf("the number is negative");
	}
	else if(num>0){
		printf("the number is positive");
	}
	else{
		printf("the number is neutral");
	}
	
	
	
	
	return 0;
}

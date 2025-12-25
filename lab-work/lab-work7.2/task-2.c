#include<stdio.h>
#include<conio.h>
int main(){
	
	int num1,num2,num3,num4;
	
	printf("enter a value of first number :");
	scanf("%d",&num1);
	
	printf("enter a value of second number :");
	scanf("%d",&num2);
	
	printf("enter a value of third number :");
	scanf("%d",&num3);
	
	printf("enter a value of fourth number :");
	scanf("%d",&num4);
	
	if(num1>num2 && num1>num3 && num1>num4){
		printf("the maximum number is :%d",num1);
	}
	
	else if(num2>num1 && num2>num3 && num2>num4){
		printf("the maximum number is :%d",num2);
	} 
	
	else if(num3>num1 && num3>num2 && num3>num4){
		printf("the maximum number is :%d",num3);
	}
	
	else{
		printf("the maximum number is :%d",num4);
	}
	
	
	return 0;
}

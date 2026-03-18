#include<stdio.h>
int main (){
	
	int age;
	
	printf("enter your age :");
	scanf("%d",&age);
	
	if(age<18){
		printf("You are not eligibal for licence");
	}
	else if(age>60){
		printf("Your age is to high for licence");
	}
	else{
		printf("congrats.You are elegible for licence");
	}
	
	
	
	
	return 0;
}

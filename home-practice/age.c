#include<stdio.h>
#include<conio.h>
int main (){
	
	int age;
	
	
	printf("enter your age :");
	scanf("%d",&age);
	
	
	if(age>=18){
		printf("you are an adult");
	}
	else{
		printf("you are a child");
	}
	
	return 0;
}

#include<stdio.h>
#include<string.h>
int main (){
	
	
	char correctUsername[50]="techskillhub.dev";
	char correctPassword[50]="123@pipl";
	
	char username[50],password[50];
	
	printf("\nEnter username :");
	scanf("%s",username);
	
	printf("\nEnter password :");
	scanf("%s",password);
	
	if(strcmp(correctUsername,username) == 0 && strcmp(correctPassword,password) == 0){
		printf("\nLogin succesfully.!!");
		printf("\nWelcome to Techskillhub.!!");
	}
	else{
		printf("\nIncorrect Username & Password.!!");
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}

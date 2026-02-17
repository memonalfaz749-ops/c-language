#include<stdio.h>
#include<string.h>
int main (){
	
	char username[50],password[50];
	char correctUser[50]="Alfaz123",correctPassword[50]="memon@123";
	
	
	printf("Enter Your username :");
	scanf("%s",username);
	
    printf("Enter Your password :");
	scanf("%s",password);
		
	if(strcmp(username,correctUser) == 0 && strcmp(password,correctPassword) == 0){
		printf("Login succesfully.!!");
	}
	else{
		printf("\nError username or password is invalid.!!");
	}
	
	
	return 0;
}

#include<stdio.h>
int main (){
	
	char username[50]="alfaz_memon";
	char password[30]="@7041";
	char user[50],pass[30];
	
	
	printf("Enter your username :");
	scanf("%s",user);
	
	printf("\nEnter your password :");
	scanf("%s",pass);
	
	if(strcmp(username,user) == 0 && strcmp(password,pass) == 0){
		printf("\nlogin sucessful");
	}
	else{
		printf("\nusername or password is invalid");
	}
	
	
	
	
	return 0;
}

#include<stdio.h>
int main (){
	
	char correctEmail[100]="alfaz749@gmail.com";
	char correctPassword[100]="alfazmemon0017";
	char email[100],password[100];
	
	printf("Enter your email :");
	scanf("%s",email);
	
	printf("Enter your password :");
	scanf("%s",password);
	
	if(strcmp(correctEmail,email) == 0 && strcmp(correctPassword,password) == 0){
		printf("\nlogin succesfully");
	}
	else{
		printf("\ninvalid email or password");
	}
	
	
	
	return 0;
}

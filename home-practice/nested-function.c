#include<stdio.h>

void getUser();
void getMsg();

void getMsg(){
	printf("Welcome user");
}

void getUser(){
	
	
	char user[50];
	
	printf("Enter username :");
	scanf("%s",user);
	
	getMsg();
	printf("\nUsername is :%s",user);
}

int main (){

    getUser();	
	
	return 0;
}

#include<stdio.h>
#include<string.h>
int main (){
	
	char Getmessage[20]="Hello,";
	char Name[50];
	
	
	printf("Enter your Name :");
	scanf("%s",Name);
	
	printf("\n%s",strcat(Getmessage,Name));
	
	
	
	
	return 0;
}

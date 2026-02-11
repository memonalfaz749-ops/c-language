#include<stdio.h>
int main (){
	
	int size=0,i,flag=1;
	char str[100];
	
	printf("Enter your name :");
	scanf("%s", str);
	
	for(i=0;str[i]!='\0';i++){
		size++;
	}
	
	for(i=0;i<size/2;i++){
		if(str[i] != str[size-i-1]){
			flag=0;
		}
	}
	
	if(flag == 1){
		printf("\nYour name is palindrome ");
	}
	else{
		printf("\nYour name is not palindrome");
	}
	
	
	
	
	
	return 0;
}

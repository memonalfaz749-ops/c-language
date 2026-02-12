#include<stdio.h>
int main (){
	
	int i,j=0,flag=1;
	char name[100];
	
	
	printf("Enter your name :");
	scanf("%s",name);
	
	for(i=0;name[i] != '\0';i++){
		j++;
	}
	j=j-1;
	for(i=0;i<=j;i++){
		if(name[i] != name[j]){
			flag=0;
		}
		j--;
	}
	
	if(flag == 1){
		printf("\nYour name is palindrome");
	}
	else{
		printf("your name is not palindrome");
	}
	
	return 0;
}

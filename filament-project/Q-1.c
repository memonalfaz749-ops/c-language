#include<stdio.h>
int main (){
	
	char str[100];
	int len=0,i,yes=1;
	
	
	printf("Enter any string :");
	scanf("%s",str);
	
	
	for(i=0;str[i] != '\0';i++){
		len++;
	}
	
	for(i=0;i<len / 2;i++){
		if(str[i] != str[len-i-1]){
			yes=0;
		}
	}
	
	if(yes){
		printf("The given string is palindrome");
	}
	else{
		printf("The given string is not palindrome");
	}
	
	
	
	return 0;
}

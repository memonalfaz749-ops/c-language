#include<stdio.h>
int main (){
	
	int i,j=0;
	
	char name[100],ch='a';
	
	printf("Enter your name :");
	scanf("%s", name);
	
	for(i=0;name[i] != '\0';i++){
		j++;
	}
	

	return 0;
}

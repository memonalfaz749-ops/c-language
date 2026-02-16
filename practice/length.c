#include<stdio.h>
int main (){
	
	int len=0,i;
	char a[50];
	
	printf("Enter any string :");
	scanf("%s",a);
	
	
	for(i=0; a[i] != '\0';i++){
		len++;
	}
	
	printf("Your string is :%s",a);
	printf("\nlength of string is : %d",len);
	
	
	return 0;
}

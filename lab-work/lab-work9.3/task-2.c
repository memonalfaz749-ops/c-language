#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,fact=1,no;
	printf("enter any number :");
	scanf("%d",&no);
	
	for(i=no;i>=1;i--){
		fact=fact*i;
	}
	
	printf("factorial of %d is :%d",no,fact);
	
	
	
	
	
}

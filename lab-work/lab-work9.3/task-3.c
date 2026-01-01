#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,no,first;
	
	printf("enter any number :");
	scanf("%d",&no);
	
	for(i=1;i<=10;i++){
	
	 first=no*i;
	 printf("%d X %d = %d\n",no,i,first);
	}
	
	
}

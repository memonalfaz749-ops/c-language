#include<stdio.h>

void addition(){
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	
	printf("Enter b:");
	scanf("%d",&b);
	
	printf("Addition is:%d\n",a+b);
	
}

int main(){
	int a,b,i;
	
	addition();
	printf("\nHello Students..!!");
	addition();
	addition();
	
	return 0;
}

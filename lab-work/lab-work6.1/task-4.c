#include<stdio.h>
#include<conio.h>
int main (){
	
	int a,b,c;

	
	printf("enter a value of a :  ",a);
	scanf("%d",&a);
	
	printf("enter a value of b : ",b);
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("value of a is : %d \n",a);
	printf("value of b is : %d",b);
	
	
	
	return 0;
}

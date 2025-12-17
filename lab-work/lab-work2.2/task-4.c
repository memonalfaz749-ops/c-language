#include<stdio.h>
#include<conio.h>
int main (){
	
	float p,r,n,interest;
	//p=principal
	
	//r=rate
	
	//n=number of month
	
	printf("this program is write to find a simple interest\n");
	
	printf("enter a value of p =");
	scanf("%f",&p);
	
	printf("enter a value of r =");
	scanf("%f",&r);
	
	printf("enter a value of n =");
	scanf("%f",&n);
	
	interest=(p*r*n)/100;
	
	printf("simple interest is = %f",interest);
	
	
	
	return 0;
}

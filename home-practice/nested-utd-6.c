#include<stdio.h>

int n1,n2;

int getnumbers();

int getnumbers(){
	
	printf("Enter first number :");
	scanf("%d",&n1);
	
	printf("\nEnter second number :");
	scanf("%d",&n2);
}

int addition();
int addition(){
	getnumbers();
	printf("\nAddition is :%d\n\n",n1+n2);
}

int substraction();

int substraction(){
	getnumbers();
	printf("\nsubstraction is :%d\n\n",n1-n2);
}

int multiplication();
int multiplication(){
	getnumbers();
	printf("\nMultiplication is :%d\n\n",n1*n2);
}

int divition();
int divition(){
	getnumbers();
	printf("\nDivition is :%d\n\n",n1/n2);
}

int main (){
	
	addition();
	substraction();
	multiplication();
	divition();
	
	return 0;
	
}

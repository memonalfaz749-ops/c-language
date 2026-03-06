#include<stdio.h>
int n1,n2;
int addition(){
	
	printf("Enter the first number :");
	scanf("%d",&n1);
	
	printf("Enter the second number :");
	scanf("%d",&n2);
	
	printf("Addition of %d and %d is %d",n1,n2,n1+n2);
}
int main (){
	
	int choice =-1;
	
	
	
	while(choice != 0){
		
	printf("\nPress 1 for +");
	printf("\nPress 2 for -");
	printf("\nPress 3 for *");
	printf("\nPress 4 for /");
	printf("\nPress 5 for %%");
	printf("\nPress 0 for Exit");
		
	printf("\nEnter your choice :");
	scanf("%d",&choice);
	
	
	switch(choice){
		
		case 1 : addition();break;
		
		case 0 : printf("Exiting");break;
		default : printf("Enter valid choice.!!");
	}
	
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}

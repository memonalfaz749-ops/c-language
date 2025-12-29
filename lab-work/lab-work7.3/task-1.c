#include<stdio.h>
#include<conio.h>
int main (){
	
	int no1,no2,no3,min;
	
	printf("enter first number :");
	scanf("%d",&no1);
	printf("enter second number :");
    scanf("%d",&no2);
    printf("enter third number :");
	scanf("%d",&no3);
	
	min=(no1<no2)?(no1<no3)? no1 : no3 :(no2<no3) ? no2:no3;
	
	printf("Minimum number is :%d",min);
	
	int score;
	char grade;
	
	
	

	
	return 0;
}

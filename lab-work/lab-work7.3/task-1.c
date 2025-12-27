#include<stdio.h>
#include<conio.h>
int main (){
	
	int no1,no2,no3;
	
	printf("enter first number :");
	scanf("%d",&no1);
	printf("enter second number :");
    scanf("%d",&no2);
    printf("enter third number :");
	scanf("%d",&no3);
	
	
	(no1<no2)?(no1<no3)? printf("minimum number is :%d",no1):(no3<no2)? printf("minimum number is :%d",no3):printf("minimum number is :%d",no2);
	
	

	
	return 0;
}

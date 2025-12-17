#include<stdio.h>
#include<stdio.h>
int main (){
	
	int first_angle,second_angle,third_angle;
	
	printf("enter first angle :");
	scanf("%d",&first_angle);
	
	printf("enter second angle :");
	scanf("%d",&second_angle);
	
	
	third_angle=180-(first_angle+second_angle);
	
	printf("third angle is : %d",third_angle);
	
	
	
	return 0;
}

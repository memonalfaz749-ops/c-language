#include<stdio.h>
#include<conio.h>
int main(){
	
	float f,c;
	
	printf("enter temperature in celsius :");
	scanf("%f",&c);
	
	f= ((9*c)/5) +32;
	
	printf("temperature in fehrenheit is : %f",f);
	
	return 0;
}

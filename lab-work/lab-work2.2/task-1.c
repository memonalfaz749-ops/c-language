#include<stdio.h>
#include<conio.h>
int main(){
	
	const float pi=3.14;
	float r,area;
	
	printf("this program is write to find the are of circle\n");
	
	printf("enter a value of radius =");
	scanf("%f",&r);
	
	  area=pi*r*r;
	
	printf("areas value is = %f",area);
	
	return 0;
}

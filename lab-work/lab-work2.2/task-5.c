#include<stdio.h>
#include<conio.h>
int main (){
	
	const float pi=3.14;
	float r,perimeter;
	
	printf("this program is write to find the perimeter of the circle\n");
	
	printf("enter a value of r =");
	scanf("%f",&r);
	
	perimeter=2*pi*r;
	printf("the perimeter of the circle is = %f",perimeter);
	
	return 0;
}

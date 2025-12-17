#include<stdio.h>
#include<conio.h>
int main(){
	
	float b_salary,HRA,DA,TA,g_salary;
	
	printf("enter your base salary : ");
	scanf("%f",&b_salary);
	
	HRA=b_salary*10/100;
	
	printf("your HRA is : %f \n",HRA);
	
	DA=b_salary*5/100;
	
	printf("your DA is : %f \n",DA);
	
	TA=b_salary*8/100;
	
	printf("your TA is : %f \n",TA);
	
	g_salary=b_salary+HRA+DA+TA;
	
	printf("your gross salary is : %f ",g_salary);
	
	
	
	
	
	
	
	
	
	return 0;
}

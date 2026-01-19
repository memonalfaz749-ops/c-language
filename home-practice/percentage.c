#include<stdio.h>
int main (){
	
	char studentName[50];
	char subject[7][50]={"Gujrati","Science","S.sciene","Maths","Hindi","computer","English"};
	int studentMarks[7],totalMarks=0,i;
	float percentage;
	
	printf("Enter your name :");
	scanf("%s",&studentName);
	
	for(i=0;i<7;i++){
		printf("\nEnter your marks of %s subject :",subject[i]);
		scanf("%d",&studentMarks[i]);
		totalMarks += studentMarks[i];
	}
	percentage=totalMarks/7;
	
	printf("\nInformation of Student");
	printf("\nStudent Name :%s ",studentName);
	printf("\nTotal marks:%d",totalMarks);
	printf("\npercentage of student is :%.2f",percentage);
	
	
	return 0;
}

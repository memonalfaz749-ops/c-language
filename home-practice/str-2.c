#include<stdio.h>
#include<string.h>
int main (){
	
	int studentId;
	char studentName[50];
	char courseName[50];
	char city[50];
	
	printf("Enter your Id :");
	scanf("%d",&studentId);
	
	printf("\nEnter student Name :");
	scanf("%s",studentName);
	
	printf("\nEnter your course Name :");
	scanf("%s",courseName);
	
	
	printf("\nEnter your city :");
	scanf("%s",city);
	
	
	printf("\n---||student information||---");
	printf("\nstudent Id is :%d",studentId);
	printf("\nstudent Name is :%s",studentName);
	printf("\nyour course Name is :%s",courseName);
	printf("\nyour city is :%s",city);
	
}

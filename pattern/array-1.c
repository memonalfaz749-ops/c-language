#include<stdio.h>
#include<conio.h>
int main (){
	
	int practical_marks[100];
	int i;
	
	
	printf("enter pracical marks :");
	
	for(i=0;i<=8;i++){
		scanf("\n%d",&practical_marks[i]);
	}
	printf("your practical marks :");
	for(i=0;i<=8;i++){
		printf("\n%d",practical_marks[i]);
	}
	
	
	
	
	
	return 0;
}

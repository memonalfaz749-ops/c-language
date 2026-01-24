#include<stdio.h>
#include<conio.h>
int main (){
	
	int row,column,i,j,total=0,a[100][100];
	float average;
	
	printf("Enter the array`s row size : ");
	scanf("%d",&row);
	
	printf("\nEnter the array`s column size :");
	scanf("%d",&column);
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("\nEnter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
			total =total + a[i][j];
			
		}
		
	}
	printf("total :%d",total);
	average = (float)total / (row*column);
		printf("\nAverage of Array :%.2f",average);
	return 0;
}

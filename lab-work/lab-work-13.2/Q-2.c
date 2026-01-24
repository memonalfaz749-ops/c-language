#include<stdio.h>
#include<conio.h>
int main (){
	
	int row,column,i,j,a[100][100],b[100][100],c[100][100];
	
	printf("Enter the array`s row size : ");
	scanf("%d",&row);
	
	printf("\nEnter the array`s column size :");
	scanf("%d",&column);
	
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("\nEnter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);	
		}
		
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("\nEnter b[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		
		}
		
	}
	
	printf("\nArrays C is :\n");
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t",c[i][j]);
			
		}
		printf("\n");
	}
	
	
	return 0;
}

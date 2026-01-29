#include<stdio.h>
int main (){
	
	int row,array[100][100];
	int i,j;
	int size;
	
	printf("Enter the array's row & column size :");
	scanf("%d",&size);
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("a[%d][%d] :",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(j=0;j<size;j++){
		for(i=0;i<size;i++){
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

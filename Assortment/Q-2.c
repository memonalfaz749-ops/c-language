#include<stdio.h>
int main (){
	
	int i,j,array[100][100],row,column,max;
	
	
	printf("Enter array's row size :");
	scanf("%d",&row);
	
	printf("Enter array's column size :");
	scanf("%d",&column);
	
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("a[%d][%d] :",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	max= array[0][0];
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			if(array[i][j] > max){
				max = array[i][j];
			}
		}
	}
	printf("\nThe largest element is :%d",max);
	
	return 0;
}

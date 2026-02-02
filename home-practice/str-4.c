#include<stdio.h>
int main(){
	int a[5][5] = {
	{2,4,1,6,3},
	{9,5,4,6,7},
	{8,2,6,3,5},
	{3,4,8,5,1},
	{2,3,9,5,7}
	};
	
	int i,j,sum = 0;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0 || i==4 || j==0 || j==4){
				sum = sum + a[i][j];
				printf(" %d ",a[i][j]);
			}
			else{
				printf("   ");
			}
		}
		printf("\n");
	}
	
	printf("\nSum is:%d",sum);
	
	return 0;
}

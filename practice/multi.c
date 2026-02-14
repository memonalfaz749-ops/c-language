#include<stdio.h>
int main (){
	
	int a[3][3]={
	{8,7,2},
	{3,7,9},
	{1,7,2}
	};
	
	int i,j=2,multi=1;

	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(j == 2-i){
			multi = multi * a[i][j];
		
		}
		
		}
	}
	
	printf("sum :%d",multi);

	
	return 0;
}

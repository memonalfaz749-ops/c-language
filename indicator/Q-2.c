#include<stdio.h>

void cube(int *p){
	int c;
	
	c = (*p) * (*p) * (*p);
	
	printf("%d ",c);
}

int main (){
	
	int a[2][2],i,j;
	
	printf("Enter array Element :\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Cubes of all elements :\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cube(&a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

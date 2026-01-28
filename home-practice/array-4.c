#include<stdio.h>
int main (){
	
	int size,i,j;
	int array[100];
	
	printf("Enter array's size :");
	scanf("%d",&size);
	
	printf("array element :");
	for(i=0;i<size;i++){
		
			printf("a[%d] :",i);
			scanf("%d",&array[i]);
		
		
	}
	  printf("\nNegative element of an Array :");
	for(i=0;i<size;i++){
		if(array[i]<0)
		printf("%d",array[i]);
	}

	
	
	
	return 0;
}

#include<stdio.h>
int main (){
	
	int a[10],b[10],i,size;
	
	printf("Enter array size :");
	scanf("%d",&size);
	
	printf("\nEnter first array element :\n");
	
	for(i=0;i<size;i++){
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	
	printf("\nEnter second array element :\n");
	
	for(i=0;i<size;i++){
		printf("b[%d] :",i);
		scanf("%d",&b[i]);
	}
	
	
	
	
	
	
	
	
	return 0;
}

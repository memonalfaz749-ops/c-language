#include<stdio.h>
int main (){
	
	int a[5],*ptr,i;
	
	ptr = &a;
	
	for(i=0;i<5;i++){
		printf("Enter element [%d] :",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n||--Square of element--||\n");
	
	for(i=0;i<5;i++){
		printf("\n\t%d = %d",a[i],(*ptr) * (*ptr));
		ptr++;
	}
	
	return 0;
}

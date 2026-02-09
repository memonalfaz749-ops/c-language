#include<stdio.h>
int main(){
	
	int i,a[5];
	
	printf("Enter 5 numbers :");
	for(i=0;i<5;i++){
		
		scanf("%d\n",&a[i]);
	}
	printf("your five number is :");
	
	for(i=0;i<5;i++){
		
		printf("%d ",a[i]);
	}
	
	return 0;
}

#include<stdio.h>

int sumofArray(int a[],int size);

int sumofArray(int a[],int size){
	
	int sum=0,i;
	
	for(i=0;i<size;i++){
		sum = sum + a[i];
	}
	
	
	return sum;
}
int main() {
	
	int num[5],i;
	
	for(i=0;i<5;i++){
		
		printf("Enter num[%d] :",i);
		scanf("%d",&num[i]);
	}
	
	printf("Sum of array is :%d",sumofArray(num,5));
	
	
	
	
	
	
	
	return 0;
}

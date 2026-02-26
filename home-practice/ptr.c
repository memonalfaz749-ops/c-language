#include<stdio.h>
int main (){
	
	int N=50;
	int *ptr;
	
	ptr = &N;
	
	printf("value of N = %d",N);
	printf("\nAddress of N = %u",&N);
	printf("\nvalue of ptr = %d",ptr);
	printf("\nAddress of ptr = %u",&ptr);
	
	
	return 0;
}

#include<stdio.h>
int main (){
	
	int i,number[500],size;
	
	printf("Enter your Array's size :");
	scanf("%d",&size);
	
	for(i=0;i<size;i++){
		printf("\nEnter your number[%d] :",i);
		scanf("%d",&number[i]);
	}
	
	printf("\nPositive numbers are :");
	
	for(i=0;i<size;i++){
		if(number[i] > 0){
			printf(" %d ",number[i]);
		}	
	}
	
	printf("\nNegative number is :");
	
	for(i=0;i<size;i++){
		if(number[i] < 0 ){
			printf(" %d ",number[i]);
		}	
	}
	
	printf("\nNeutral number is :");
	
	for(i=0;i<size;i++){
		if(number[i] == 0){
			printf(" %d ",number[i]);
		}	
	}
	
	
	
	return 0;
}

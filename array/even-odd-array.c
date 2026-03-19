#include<stdio.h>
int main (){
	
	int i,number[500],size;
	
	printf("Enter your Array's size :");
	scanf("%d",&size);
	
	for(i=0;i<size;i++){
		printf("\nEnter your number[%d] :",i);
		scanf("%d",&number[i]);
	}
	
	printf("\nEven numbers are :");
	
	for(i=0;i<size;i++){
		if(number[i] % 2 == 0){
			printf(" %d ",number[i]);
		}	
	}
	
	printf("\nOdd numbers are :");
	
	for(i=0;i<size;i++){
		if(number[i] % 2 != 0 ){
			printf(" %d ",number[i]);
		}	
	}
	
	
	
	
	
	return 0;
}

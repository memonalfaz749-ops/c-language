#include<stdio.h>
#include<conio.h>
int main(){
	
	int array[5],i,temp=0;
	
	printf("enter numbers :");
	
	for(i=0;i<5;i++){
		scanf("\n%d",&array[i]);
		temp++;
	}
	
	printf("length of array is :%d",temp);
	
	
	
	
	return 0;
}

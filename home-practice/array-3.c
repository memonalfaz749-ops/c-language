#include<stdio.h>
#include<conio.h>
int main(){
	
	int array[100],i,temp=0,num;
	float ave;
	printf("enter array size :");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		scanf("\n%d",&array[i]);
		temp=temp+array[i];
	}
	ave=temp/num;
	printf("Average of array is :%f ",ave);
	
	
	
	
	return 0;
}

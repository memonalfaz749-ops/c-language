#include<stdio.h>
int main (){
	
	int n,i,a[100];
	
	printf("Enter your array size :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("\nEnter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	int small=a[0];
    
    for(i=0;i<n;i++){
    	if(small > a[i]){
    		small = a[i];
		}
	}
	
	printf("\nSmallest number of array is :%d",small);
	
	
	return 0;
}

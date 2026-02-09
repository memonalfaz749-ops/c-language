#include<stdio.h>
int main (){
	
	int n,i,a[100];
	
	printf("Enter your array size :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("\nEnter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	int max=a[0];
    
    for(i=0;i<n;i++){
    	if(max < a[i]){
    		max = a[i];
		}
	}
	
	printf("\nMaximum number of array is :%d",max);
	
	
	return 0;
}

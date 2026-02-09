#include<stdio.h>
int main(){
	
	int n,i,a[100];
	
	printf("Enter your aaray size :");
	scanf("%d",&n);
	
	printf("\nEnter your array elements :");
	for(i=0;i<n;i++){
		
		scanf("%d ",&a[i]);
		
	}
	
	printf("\nYour array element is :");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	
	
	return 0;
}

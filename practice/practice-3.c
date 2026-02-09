#include<stdio.h>
int main(){
	
	int n,i,a[100],sum=0,size;
	
	printf("Enter your aaray size :");
	scanf("%d",&n);
	
	size=n-1;
	printf("\nEnter your array elements :");
	for(i=0;i<=size;i++){
		
		printf("\nEnter a[%d] :",i);
		scanf("%d",&a[i]);
		sum = sum +a[i];
	}
	
	printf("\nSum of all array element is :%d",sum);
	
	
	
	return 0;
}

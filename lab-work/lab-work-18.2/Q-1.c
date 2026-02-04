#include<stdio.h>
int arraySum(int a[],int n);
int main (){
	
	int n,a[100],i;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	printf("The sum of an Array :%d",arraySum(a,n));
	return 0;
}
int arraySum(int a[],int n){
	int i,sum=0;
	
	for(i=0;i<n;i++){
		sum = sum + a[i];	
		
	}
	return sum;
}

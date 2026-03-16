#include<stdio.h>
int main (){
	
	int a[100],b[100],sum[100];
	int *p1,*p2,*p3;
	int i,n;
	
	
	printf("Enter size of Array :");
	scanf("%d",&n);
	
	printf("Enter first array element :\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter second array element :\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	
	p1=a;
	p2=b;
	p3=sum;
	
	for(i=0;i<n;i++){
		*(p3+i) = *(p1+i) + *(p2+i);
	}
	
	printf("Sum of array :\n");
	for(i=0;i<n;i++){
		printf("%d ",*(p3+i));
	}
	
	return 0;
}

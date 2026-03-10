#include<stdio.h>
int main (){
	
	int a[50],i,total=0,average=0;
	
	printf("Enter array element :");
	
	for(i=0;i<5;i++){
		printf("a[i] :",i);
		scanf("%d",&a[i]);
		total= total + a[i];
	}
	
	average = total / 5 ;
	
	printf("total :%d",total);
	printf("\nAverage :%d",average);
	
	
	return 0;
}

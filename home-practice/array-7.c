#include<stdio.h>
int main (){
	
	int a[50],i,total=0;
	
	printf("Enter array element :\n");
	
	for(i=0;i<5;i++){
		printf("a[i] :",i);
		scanf("%d",&a[i]);
		total= total + a[i];
	}
	
	
	printf("total :%d",total);
	
	
	return 0;
}

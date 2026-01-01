#include<stdio.h>
#include<conio.h>
int main (){
	
	int i,sum=0,num;
	
	printf("enter any number :");
	scanf("%d",&num);
	
	
	for(i=1;i<=num;i++){
		sum=sum+i;
	}
	
	printf("sum of 0 to %d is :%d",num,sum);
	return 0;
}

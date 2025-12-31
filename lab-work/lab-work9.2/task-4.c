#include<stdio.h>
#include<conio.h>
int main(){
	
	int no1=0,no2=1,no3,user,i;
	
	printf("enter number :");
	scanf("%d",&user);
	
	no3=no1+no2;
	printf("%d %d %d",no1,no2,no3);
	
	for(i=1;i<=user-3;i++){
		no1=no2;
		no2=no3;
		no3=no1+no2;
		printf("%d ",no3);
	}
	
	
	return 0;
}

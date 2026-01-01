#include<stdio.h>
#include<conio.h>
int main (){
	
	int no1=0,no2=1,no3,i;
	
	no3=no1+no2;
	printf("%d %d %d",no1,no2,no3);
	
	for(i=1;i<=10;i++){
		no1=no2;
		no2=no3;
		no3=no1+no2;
		printf("%d ",no3);
	}
	
	
	return 0;
}

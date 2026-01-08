#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j,k,row;
	
	for(i=5;i>=1;i--){
		row=i-1;
		for(k=1;k<=row;k++){
			printf(" ");
		}
		for(j=i;j<=5;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}

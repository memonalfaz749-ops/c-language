#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j,k,row=5;
	
	for(i=5;i>=1;i--){
		for(k=1;k<=row-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			if(j%2==0){
				printf("0");
			}
			else{
				printf("1");
			}
		}
		printf("\n");
	}
	
	return 0;
}

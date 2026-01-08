#include<stdio.h>
#include<conio.h>
int main (){
	
	int i,j,space,row=5;
	
	for(i=5;i>=1;i--){
		
		//space
		
		for(space=1;space<=row-i;space++){
			printf(" ");
		}
		
		//number
		
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

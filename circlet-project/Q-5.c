#include<stdio.h>
#include<conio.h>
int main (){
	
	int i,j,space;
	
	for(i=5;i>=1;i--){
		
		//space
		
		for(space=1;space<=i-1;space++){
			printf(" ");
		}
		
		//number
		
		for(j=i;j<=5;j++){
			printf("%d",j);
		}
		
		for(j=4;j>=i;j--){
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	
	return 0;
}

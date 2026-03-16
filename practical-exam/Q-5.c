#include<stdio.h>
int main(){
	
	int i,k,j;
	
	for(i=0;i<5;i++){
		
		for(k=0;k<i;k++){
			
			printf(" ");
			
		}
       for(j=10-i;j>=6;j--){
       	
       	printf("%d",j);
       	
	   }
	   
	   printf("\n");
	   
	}
	
	
}

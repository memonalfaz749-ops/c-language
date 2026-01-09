#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i == 1 || i == 3){
				printf("*");
			}
			else if(j==1){
				printf("*");
			}
			else if(i == 2 && j == 5){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	
	return 0;
}
//i=1 1<=5 true j=1 1<=5  if i==1 1==1 true print
//j++ j=2  2<=5 true i==1 1==1 true print .........
//j++ j=5 5<=5 true i==1 1==1 true print j++ j=6 6<=5 false
//i++ i=5 5<=5 true j=1 1<=5 true print ........... 

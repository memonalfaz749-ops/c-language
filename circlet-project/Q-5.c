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
//i=5 5>=1 true space=1 1<=5-1 1<=4 ture print 
//space++ space=2 2<=4 print space++ space=3 3<=4 true print space++ space=4 4<=4 true print 
//space++ space=5 5<=4 false j=5 5<=5 true print j++ j=6 6<=5 false j=4 4>=5 false 
//i-- i=1 1<=1 true space=1 1<=1-1 1<=0 false j=1 1<=5 true  print j++ j=2 2<=5 true print .....

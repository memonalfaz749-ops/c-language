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
		printf("\n");
	}
	
	
	
	return 0;
}
//i=5 5>=1 space=1 1<=5-1 1<=4 print space++ space=2 2<=4 true print 
//space++ space=3 3<=4 true print space++ space=4 4<=4 true print space++ space=5 5<=4 false
//i-- i=4 4>=1 true space=1 1<=4-1 1<=3 true print space++ space=2 2<=3 true print space++ space=3 3<=3 true print
//space++ space=4 4<=3 false

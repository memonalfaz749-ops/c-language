#include<stdio.h>
#include<conio.h>
int main (){
	
	int i,j;
	
	for(i=41;i<=45;i++){ 
		for(j=41;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	
	return 0;
}
// i=41 41<=45 true j=41 41<=41 true print j++ j=42 42<=41 false
//i++ i=45 45<=45 true j=41 41<=45 true print j++ j=42 42<=45 true j++ j=43 43<=45 true j++ .........

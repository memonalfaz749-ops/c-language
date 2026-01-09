#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j,space;
	
	for(i=1;i<=5;i++){
		
		
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		
		//space
		
		for(space=1;space<=(5-i)*2;space++){
			printf(" ");
		}
		
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	return 0;
}
//i=1 1<=5 j=1 1<=1 true print j++ j=2 2<=1 false
//space=1 1<=(5-1)*2 1<=8 true print space++ space=2 2<=8 true print ....
//space++ space=8 8<=8 true print space++ space=9 9<=8 false
//j=i j=1 1>=1 true print j-- j=0 0>=1 false

//i++ i=5 5<=5 true j=1 1<=5 true print j++ j=2 2<=5 true print ........
//j++ j=5 5<=5 true print j++ j=6 6<=5 false
//space=1 1<=(5-5)*2 1<=0 false
//j=i j=5 5>=1 true print j-- j=4 4>=1 true print .......
//j-- j=1 1>=1 true print j-- j=0 0>=1 false

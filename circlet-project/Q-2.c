#include<stdio.h>
#include<conio.h>
int main (){
	
	int i,j,temp=11;
	
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%d ",temp);
			temp++;
		}
		printf("\n");
	}
	
	return 0;
}
//i=1 1<=4 true j=1 1<=1 true print temp++ temp =2 j++ 2<=1 false
//i++ i=4 4<=4 true j=1 1<=4 true print temp++ temp= j++ j=2 2<=3 true print temp++ temp=


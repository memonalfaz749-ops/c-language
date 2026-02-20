#include<stdio.h>
int main(){
	
	int n1=0,n2=1,n3,i;
	
	n3=n1+n2;
	printf("series :%d,%d,%d,",n1,n2,n3);
	
	for(i=0;i<=10;i++){
		n1=n2;
		n2=n3;
		n3=n1+n2;
		printf("%d,",n3);
	}
	
	
	
	
	
	
	
	return 0;
}

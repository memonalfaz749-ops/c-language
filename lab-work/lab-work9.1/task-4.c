#include<stdio.h>
#include<conio.h>
int main(){
	
	int N;
	
	printf("enter any number :");
	scanf("%d",&N);
	
	while(N>=1){
		if(N % 2 != 0){
			printf("%d\n",N);
		}
		N--;
	}
	
	
	
	
	return 0;
}


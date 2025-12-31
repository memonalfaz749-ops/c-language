#include<stdio.h>
#include<conio.h>
int main(){
	
	int i=1,N;
	
	printf("enter any number :");
	scanf("%d",&N);
	 
	 
	do{
		if(i % 2 == 0){
			printf("%d\n",i);
			
		}
		i++;
	}while(i<=N);
	
	
	return 0;
}

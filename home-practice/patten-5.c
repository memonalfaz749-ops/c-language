#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j,user;
	
	printf("enter a number :");
	scanf("%d",&user);
	
	for(i=1;i<=user;i++){
		for(j=1;j<=i;j++){
             if(j%2==0){
             	printf("0");
			 } 			
			 else{
			 	printf("1");
			 }
		}
		printf("\n");
	}
	
	
	
	return 0;
}
//1
//10
//101
//1010
//10101

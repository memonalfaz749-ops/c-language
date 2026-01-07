#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j,user;
	
	printf("enter a number :");
	scanf("%d",&user);
	
	for(i=user;i>=1;i--){
		for(j=1;j<=i;j++){
			if(i%2==0){
				printf("@");
			}
			else{
				printf("#");
			}
		}
		printf("\n");
	}
	
	
	
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main (){
	
	int i,j,space;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
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

#include<stdio.h>
void check(int n){
	
	if(n % 3 == 0 && n % 5 == 0 ){
		printf("Given number is divisible by 3 and 5.!!");
	}
	else{
		printf("Given number is not divisible by 3 and 5.!!");
	}
	
}
int main (){
	
	int num;
	
	printf("Enter a number :");
	scanf("%d",&num);
	
	
	check(num);
	
	
	
	
	
	
	return 0;
}

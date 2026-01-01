#include<stdio.h>
#include<conio.h>
int main(){
	
	int num,rem,count;
	
	printf("Enter any number :");
	scanf("%d",&num);
	
	while(num !=0){
		rem=num % 10;
		
		num=num / 10;
		count++;
	}
	
	printf("Total number of digits :%d",count);
	
	
	return 0;
}

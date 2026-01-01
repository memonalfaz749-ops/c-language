#include<stdio.h>
#include<conio.h>
int main (){
	
	int no,rev=0,rem,x;
	
	printf("enter any number :");
	scanf("%d",&no);
	
	x=no;
	
	while(no != 0){
		rem=no % 10;
		rev=rev*10+rem;
		no=no / 10;
	}
	
	if(x==rev){
		printf("given number is palindrome number ");
	}
	else{
		printf("given number is not pilondrome number");
	}
	
	
	return 0;
}

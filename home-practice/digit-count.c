#include<stdio.h>
#include<conio.h>
int main (){
	
	int no,count,rem;
	
	printf("enter any number :");
	scanf("%d",&no);
	
	while(no != 0){
		rem=no % 10;
		
		no=no / 10;
		count++;
	}
	
	printf("given number is %d digit number ",count);
	
	
	return 0;
}

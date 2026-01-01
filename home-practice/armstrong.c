#include<stdio.h>
#include<conio.h>
int main (){
	
	int no,arm=0,rem,x;
	
	printf("enter any number :");
	scanf("%d",&no);
    
	x=no;	
	
	while(no != 0){
		rem=no % 10;
		arm=arm+rem*rem*rem;
		no=no / 10;
	}
	
    if(x==arm){
    	printf("%d is a armstrong number ",x);
	}	
	else{
		printf("%d is not armstrong number",x);
	}
	
	return 0;
}

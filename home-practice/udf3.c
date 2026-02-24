#include<stdio.h>

int findMaximum(int n1,int n2);

int findMaximum(int n1,int n2){
	
	
	if(n1>n2){
		
		printf("A is greater");
		
        
		return n1;			
	}
	else{
		printf("B is greater");
		
		return n2;
	}
}
int main (){
	
	int a,b,ans;
	
	printf("Enter number-1 :");
	scanf("%d",&a);
	
	printf("Enter number-2 :");
	scanf("%d",&b);
	
	ans = findMaximum(a,b);
	
	printf("\nmaximum number is :%d",ans);
	
	
	
	
	
	
	
	return 0;
}	
	
	
	
	
	


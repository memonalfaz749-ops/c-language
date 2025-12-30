#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,year1,year2;
	
	printf("enter first year :");
	scanf("%d",&year1);
	
	printf("enter second year :");
	scanf("%d",&year2);
	
	i=year1;
	
	
	while(i<=year2){
		if(i % 4 ==0){
        	printf("%d\n",i);
		}
		i++;
	}
	
	
	
	
	return 0;
}


#include<stdio.h>
int price=0,qty=0,total=0,choice;

void FoodOrder(){
	
    printf("\nEnter your choice :");
    scanf("%d",&choice);
	
	printf("\nEnter number of qty :");
	scanf("%d",&qty);
	
	switch(choice){
		case 1:price=399;break;
		case 2:price=199;break;
		case 3:price=249;break;
		case 4:price=99;break;
		case 5:return;break;
	}
	
	total = price * qty ;
}

int main(){
	
	printf("\n\n ||-- Food menu --||");
	printf("\n\t1.pizza=399");
	printf("\n\t2.sandwich=199");
	printf("\n\t3.burger=249");
	printf("\n\t4.pasta=99");
	printf("\n\t5.Exit");
	
	FoodOrder();
	
	printf("\nYour total bill is :%d",total);
	
	
	
	return 0;
}

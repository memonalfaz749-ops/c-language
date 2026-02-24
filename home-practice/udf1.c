#include<stdio.h>

int applyDiscount();

int applyDiscount(){
	
	char userName[50];
	int discount=0,purchaseAmount,finalAmount;
	
	printf("Enter yaour name :");
	scanf("%s",userName);
	
	printf("\nEnter your purchase Amount :");
	scanf("%d",&purchaseAmount);
	
	if(purchaseAmount >=5000){
		discount = purchaseAmount * 0.10;
	}
	else{
		discount = purchaseAmount * 0.05;
	}
	
	finalAmount = purchaseAmount - discount;
	
	return finalAmount;
}

int main (){
	
	printf("Final amount is :%d",applyDiscount());
	
	
	
	return 0;
}

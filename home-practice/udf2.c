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
	
	printf("\n\n|| --- == Invoice == --- ||");
	printf("\ncustomerName:%s",userName);
	printf("\npurchaseAmount:%d",purchaseAmount);
	printf("\nDiscount:%d",discount);
	printf("\n==========================");
	printf("\nfinalAmount : %d",finalAmount);

	
}

int main (){
	
	applyDiscount();
	
	
	
	return 0;
}

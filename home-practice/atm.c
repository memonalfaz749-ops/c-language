#include<stdio.h>

int balance=5000;

//function declaration

int checkbalance(int balance);
int diposit();
int withdraw();

int main(){
	
    int	correctpin=7041;
	int pin;
	int choice;
	printf("\nWelcome to AXIS BANK");
	printf("\nEnter a pin :");
	scanf("%d",&pin);
	
	if(pin == correctpin){
	
	while(1){
		printf("\npress 1 for check balance");
		printf("\npress 2 for diposit");
		printf("\npress 3 for withdraw");
		printf("\npress 4 for exit");
		printf("\nEnter your choice :");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				checkbalance(balance);
				break;
				
			case 2:
			    diposit();
			    break;
			
			case 3:
			    withdraw();
			    break;
				
			case 4:
				printf("\nThanks for visiting");		
		}
	}
	}
	else{
		printf("\npin is not correct");
	}
	
	return 0;
}

//functions

int checkbalance(int balance){
	printf("Your account balance is : %d",balance);
}
int diposit(){
	
	int amount;
	printf("\nEnter an amount for deposit :");
	scanf("%d",&amount);
	
	if(amount<0){
		printf("Enter valid amount !");
	}
	else{
		balance = balance + amount;
		printf("\nYour current balance is :%d",balance);
	}
}
int withdraw(){
	
	int amount;
	printf("\nEnter an amount for deposit :");
	scanf("%d",&amount);
	
	if(amount<0){
		printf("Enter valid amount !");
	}
	if(amount>balance){
		printf("\nYour account has low balance !");
	}
	else{
		balance = balance - amount;
		printf("\nYour current balance is :%d",balance);
	}
}

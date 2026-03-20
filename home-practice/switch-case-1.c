#include<stdio.h>
int main (){
	
	int choice;
	
	printf("When c language was created ");
	printf("\npress 1 for 1972");
	printf("\npress 2 for 1992");
	printf("\npress 3 for 1982");
	printf("\npress 4 for 1975\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
		    printf("Your answer is correct");
		    break;
		
		case 2:
			printf("\nYour answer is wrong");
			break;
			
		case 3:
			printf("\nYour answer is wrong");
			break;
			
		case 4:
			printf("\nYour answer is wrong");
			break;	
		
		default: printf("\nEnter valid answer");		
	}
	
	
	
	
	
	
	
	
	return 0;
}

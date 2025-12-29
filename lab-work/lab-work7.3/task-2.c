#include<stdio.h>
#include<conio.h>
int main(){
	
	int language,recharge;
	
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujrati\n");
			printf("enter your choice:");

	scanf("%d",&language);
	
	switch(language){
		case 1:
	
			
		printf("Press 1 for Internet Recharge\n");
		printf("Press 2 for Top-up Recharge\n");
		printf("Press 3 for Special Recharge\n");
		printf("enter your choice:");
		scanf("%d",&recharge);
		
		
		switch(recharge){
			
			case 2:
				printf("You have Succesfully done a Top-up Recharge");
				break;
				
			default: printf("enter a valid number");
				
			}
			break;
		case 2:
		printf("Internet Recharge ke liye 1 dabaiye\n");
		printf("Top-up Recharge ke liye 2 dabaiye\n");
		printf("Special Recharge ke liye 3 dabaiye\n"); 
		printf("enter your choice:");
		scanf("%d",&recharge);
			switch(recharge){
			
			case 1:
				printf("Aapne safaltapurvak Internet Recharge kar liya");
				break;
				
			default: printf("enter a valid number");
				
			}
			break;
		case 3:
		printf("Internet Recharge mate 1 dabavo\n");
		printf("Top-up Recharge mate 2 dabavo\n");
		printf("Special Recharge mate 3 dabavo\n"); 
		printf("enter your choice:");
		scanf("%d",&recharge);
			switch(recharge){
			
			case 3:
				printf("Tame safaltapurvak Special Recharge karyu chhe ");
				break;
				
			default: printf("enter a valid number");
				
			}
			break;  	
		default: printf("enter a valid number");
		
	
	}
	
	
	
	return 0;
}

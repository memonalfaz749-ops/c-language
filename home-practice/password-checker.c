#include<stdio.h>
int main (){
	
	char pass[100];
	int i,score=0;
	int hasUpper = 0,hasLower = 0,hasDigit = 0,hasSpecial = 0;
	int length = 0;
	
	printf("Enter your Password :");
	scanf("%s",pass);
	
	for(i=0;pass[i] != '\0';i++){
		length++;
	}
	
	for(i=0;i < length ;i++){
		if(pass[i] >='A' && pass[i] <= 'Z'){
			hasUpper=1;
		}
		else if(pass[i] >= 'a' && pass[i] <= 'z'){
			hasLower=1;
		}
		else if(pass[i] >= '0' && pass[i] <= '9'){
			hasDigit = 1;
		}
		else{
			hasSpecial=1;
		}
	}
	
	score= hasUpper + hasLower + hasDigit + hasSpecial;
	
	if(length >= 8 && score == 4){
		printf("\nYour password is Strong.!!");
	}
	else if(length >=6 && score >=3){
		printf("\nYour password is Medium.!!");
	}
	else{
		printf("\nYour password is weak");
	}
	
	
	
	return 0;
}

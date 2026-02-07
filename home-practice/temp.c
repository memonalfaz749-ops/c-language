#include<stdio.h>
float convertTemp(float celsius);
int main (){
	
	float far=convertTemp(37);
	
	printf("far :%f",far);
	
	
	return 0;
}
float convertTemp(float celsius){
	float far = celsius * 1.8 + 32 ;
	return far;
}


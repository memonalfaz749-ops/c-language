#include<stdio.h>

char length(char name[100]);

char length(char name[100]){
	
	int length=0,i;
	
	for(i=0;name[i] != '\0';i++){
		length++;
	}
	
	printf("\nName is :%s",name);
	printf("\nLength is :%d",length);
}

int main (){
	
	
	
	length("alfaz");
	
	
	
	return 0;
}

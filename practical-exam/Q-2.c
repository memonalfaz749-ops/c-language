#include<stdio.h>

void countConsonats(char str[]){
	int i;
	int freq[256] = {0};
	
	 for(i=0;str[i] !='\0';i++){
    	freq[(int)str[i]]++;
	}
	
	printf("\nConsanats in sentence :\n");
	
	for(i=0;str[i] !='\0';i++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == ' ' || str[i] == '\n'){
		freq[(int)str[i]] = 0 ;
	    }
	  else if(freq[(int)str[i]] != 0){
	  	printf("\n%c = %d",str[i],freq[(int)str[i]]);
	  } 
	  
	  	freq[(int)str[i]] = 0 ;
	  
	}
	
}
int main (){
	
	char str[100];
	
	
	
	printf("Enter a sentence :");
	gets(str);
	
	countConsonats(str);
	
	
	
	
	
	
	
	
	
	return 0;
}

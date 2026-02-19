#include<stdio.h>

int main() {
    char str[100];
    int i;
    int freq[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    
    for(i=0;str[i] !='\0';i++){
    	freq[(int)str[i]]++;
	}
	
	printf("\nFrequency of each letter\n");
	
	for(i=0;str[i] != '\0';i++){
		if(freq[(int)str[i]] != 0){
		printf("\n%c = %d",str[i],freq[(int)str[i]]);
	}
    freq[(int)str[i]] = 0 ;
	}
	
    return 0;
}


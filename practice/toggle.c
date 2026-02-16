#include<stdio.h>
int main (){
	
	int len=0,i;
	char a[50];
	
	printf("Enter any string :");
	scanf("%s",a);
	
	
	for(i=0; a[i] != '\0';i++){
		len++;
		
		if(a[i] >= 'a' && a[i] <= 'z'){
			a[i] = a[i] - 32;
		}
		else if(a[i] >= 'A' && a[i] <= 'Z'){
			a[i] = a[i] + 32;
		}
	}
	
	printf("Your string is :%s",a);
	printf("\nlength of string is : %d",len);
	
	
	return 0;
}

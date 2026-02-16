#include<stdio.h>
int main (){
	
	int len=0,i;
	char a[50];
	
	printf("Enter any string :");
	scanf("%s",a);
	
	
	for(i=0; a[i] != '\0';i++){
		if(a[i] == 'a' || a[i] == 'e' || a[i] =='i' || a[i] == 'o' || a[i] == 'u'){
			len++;
		}
	}
	
	printf("Your string is :%s",a);
	printf("\nNumber of vowels in string is  : %d",len);
	
	
	return 0;
}

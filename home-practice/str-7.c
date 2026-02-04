#include<Stdio.h>
int main(){
	
	char name[100];
	int i;
	
	printf("Enter your name :");
	scanf("%s",name);
	
	for(i=0;name[i] != '\0';i++){
		if(name[i] >= 'a' && name[i] <= 'z'){
			name[i]=name[i] - 32;
			
		}
	
	}
	printf("upper case name :%s",name);
	return 0;
}

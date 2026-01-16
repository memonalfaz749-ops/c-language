#include<stdio.h>
#include<conio.h>
int main (){
	
	int a1[5],a2[5],a3[5],i;
	
	printf("enter first array numbers :\n");
	
	for(i=0;i<5;i++){
		scanf("%d",&a1[i]);
	}
	
	printf("enter second array numbers :\n");
	
	for(i=0;i<5;i++){
		scanf("%d",&a2[i]);
	}
	printf("first array numbers :");
	
	for(i=0;i<5;i++){
		printf("%d ",a1[i]);
	}

    printf("\nsecond array numbers :");	
	
	for(i=0;i<5;i++){
		printf("%d ",a2[i]);
	}
	
	//store
	
	
	for(i=0;i<5;i++){
		a3[i]=a1[i]+a2[i];
	}
	
	printf("\nresult of array :");
	
	for(i=0;i<5;i++){
		printf("%d ",a3[i]);
	}
	
	return 0;
}

#include<stdio.h>
int main (){
	
	int a = 5,*ptr1,**ptr2,***ptr3;
	
	ptr1 = &a;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	
	printf("address of a = %u",&a);
	printf("\na = %d",a);
	
	printf("\naddress of *ptr1 = %u",&ptr1);
	printf("\n*ptr = %d",*ptr1);
	printf("\nptr1 = %d",ptr1);
	
	printf("\naddress of **ptr2 = %u",&ptr2);
	printf("\n**ptr2 = %d",**ptr2);
	printf("\nptr2 = %d",ptr2);
	
	printf("\naddress of ***ptr3 = %u",&ptr3);
	printf("\n***ptr3 = %d",***ptr3);
	printf("\nptr3 = %d",ptr3);
	
	return 0;
}

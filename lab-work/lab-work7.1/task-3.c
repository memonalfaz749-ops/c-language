#include<stdio.h>
#include<conio.h>
int main(){
	
   float maths,science,english,average;
   
   printf("enter your maths marks :");
   scanf("%f",&maths);
   
   printf("enter your science marks :");
   scanf("%f",&science);
   
   printf("enter your english marks");
   scanf("%f",&english);
   
   if(maths < 0 || maths > 100 || science < 0 || science > 100 || english < 0 || english > 100){
   	printf("enter marks from 0 to 100 ");
   }	
   else{
   	average=(maths+science+english)/3;
   	printf("your average marks is :%f",average);
   }
	
	return 0;
}

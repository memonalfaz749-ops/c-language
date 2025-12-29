#include<stdio.h>
#include<conio.h>
int main(){
	
	int score;
	char grade;
	
	printf("\nenter your score :");
	scanf("%d",&score);
	
	grade=
	(score<=100 && score>=90)? 'A':
	(score>=75 && score<90)? 'B':
	(score>=60 && score<75)? 'C':
	(score>35 && score<60)? 'D':
	(score>=0 && score<=35)? 'F':printf("invalid socre");
	
	switch(grade){
		case 'A': 	
		           printf("your grade is :%c .Exellent work",grade);
				    break; 
		
		case 'B':  	
		           printf("your grade is :%c .Well done",grade); 
				   break;
		
		case 'C':	
		           printf("your grade is :%c .Good job",grade);
		           break;
		
		case 'D':	
		          printf("your grade is :%c .You passed but you can do better",grade);
				  break;
		
		case 'F':   
		          printf("your grade is %c .Sorry you failed",grade); 
				  break;
		
		default :
			      printf("score should between 0 to 100");
		          break;
		
	
	}
	if(grade=='A' || grade=='B' || grade=='C' || grade=='D'){
		printf(" 'congratulation! You are eligible for next level' ");
	}
	else {
		printf(" 'Please try again next time' ");
	}
	
	
	return 0;
}

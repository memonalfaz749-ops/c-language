#include<stdio.h>
#include<conio.h>
int main (){
	
	char grade;
	int score;
	
	printf("enter your score :");
	scanf("%d",&score);
	
	if(score>=90 && score<=100 ){
			grade='A';
		printf("your grade is %c .Exellent work",grade);
	}
	else if(score<90 && score>80){
		grade='B';
		printf("your grade is :%c .Well done",grade);
	}
	else if(score<80 && score>70){
		grade='C';
		printf("your grade is %c .Good job",grade);
	}
	
	else if(score<70 && score>35){
		grade='D';
		printf("your grade is %c .You passed,but you could do better ",grade);
	}
	else if(score>0 && score<=35){
		grade='F';
		printf("your grade is %c .sorry you are failed",grade);
	
	}
	
	else{
		printf("score is invalid");
	}
	
	
	
	return 0;
}

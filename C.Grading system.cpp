//Grading system
#include <stdio.h>
int main(){
	int bcs, bes, bas,average;
	printf("Enter your bcs marks");
	scanf("%d",&bcs);
	
	printf("Enter your bes marks");
	scanf("%d",&bes);
	
	printf("Enter your bas marks");
	scanf("%d",&bas);
	
	average=(bcs+bes+bas)/3;
	
	if(average>=70 && average<=100){
		printf("Your grade is:A\n");
	}
	else if(average>=60 && average<=69){
		printf("Your grade is:B\n");
	}
	else if (average >=50 && average <60){
		printf("Your grade is:C\n");
	}
	elseS if (average>=40 && average<50){
		printf("Your grade is:D\n");
		
	}
	else{
		printf("Your grade is:E\n");
	}

	
	
}
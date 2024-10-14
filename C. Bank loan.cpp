//Bank loan
#include<stdio.h>include 
int main(){
	int age,income;
	printf("Enter your age");
	scanf("%d",&age);
	
	printf("Enter your income");
	scanf("%d",&income);
	
	if(age<=18 && income<=21000){
		printf("You dont qualify for the loan.\n");
	}
	else if( age >18 && income >21000){
		printf("You qualify for the loan.\n");
	}
	return 0;
	
}
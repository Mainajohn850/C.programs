//even number 
#include <stdio.h>

int isEven(int number){
	return number %2 == 0;
	
}
int main(){
	int number;
	printf("Enter a number to check");
	scanf("%d",&number);
	
	if (isEven(number)){
		printf("The number is even");
		
	}
	else {
		printf("The number is odd");
	}
	
	return 0;
}

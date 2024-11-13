#include <stdio.h>
int isodd (int number){
	return number %3==1;
	}
	int main(){
		int number;
		printf("Enter number to be checked");
		scanf("%d",&number);
		
		if ( isodd (number)){
			printf("The number is odd");
		}
		else {
			printf("The number is even");
		}
		return 0;
	}
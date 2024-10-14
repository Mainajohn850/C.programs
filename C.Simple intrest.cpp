// simole intrest
#include<stdio.h>
int main(){
	int a,b,c,SI;
	printf("Enter the amount");
	scanf("%d",&a);
	
	printf("Enter the time in months");
	scanf("%d",&b);
	
	printf("Enter the rate");
	scanf("%d",&c);
	
	SI=(a*b*c)/100;
	printf("The simple intrest is %d\n ,SI");
	
	
	
	return 0;
}
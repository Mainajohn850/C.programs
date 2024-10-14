// Calculating the area of a rectangle//

#include <stdio.h>

int main(){ 
	int x,y,area;
	printf("Enter the length");
	scanf("%d",&x);
	
	printf("Enter the height");
	scanf("%d",&y);
	
	area=x*y;
	printf("The area of the rectangle is %d\n",area);
	
	return 0;
}
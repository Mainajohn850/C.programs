//V0lume and surface area of cylinder

#include <stdio.h>

int main(){
	int r,h;
	float volume,SA;
	
	printf("Enter the radius of the cylinder");
	scanf("%d",&r);
	
	printf("Enter the height of the cylinder");
	scanf("%d",&h);
	
	volume=3.14*r*r*h;
	printf("The volume of the cylinder is: %2f\n", volume);
	
	SA=(2*3.14*r*r)+(2*3.14*r*h);
	printf("The surface area of the cylinder is: %2f\n",SA);
	
	return 0;
	
	
}
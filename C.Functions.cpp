//c functions
#include<stdio.h>
#include<math.h>

int sum(int x,int y);
float divide(float a,float b);

int main(){
	int y,x,c,b;
	float k;
	printf("Enter two values:");
	scanf("%d%d",&x,&c);
	
	y = sum(x,c);
	b = sum(10,20);
	k = divide(x,c);
	printf("The sum is %d\n",y);
	printf("The 2nd sum is %d\n",b);
	printf("The division is %2f\n",k);
	return 0;
}
int sum(int y,int k){
	int b;
	b = b=k;
	return b;
}
float divide (float x,float c){
	float j;
	j = x/c;
	return j;
}
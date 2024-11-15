//scores
#include <stdio.h>

int main(){
	int j,k;
	int scores[4][2]=
	
	{
		
	{65,92},
	{84,72},
	{35,70},
	{59,67}
	};
	
	for( j = 0;j < 4; j++){
	for(k=0;k<2;k++){
	
	printf("scores [%d][%d]=%d\n",j,k,scores[j][k]);
	}
	}
	return 0;
		
	
	
}
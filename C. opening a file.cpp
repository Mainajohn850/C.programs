// c programs opening 
#include <stdio.h>
#include <stdlib.h>

int main (){
	FILE* fptr;
	
	fptr = fopen("C:\\Users\\ZBOOK\\OneDrive\\Desktop\\C.programs\\outputtxt","r");
	
	if (fptr == NULL){
		printf("the file cannot be opened");
		
	}
	return 0;
}
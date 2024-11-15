//creating a file
#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* fptr;
	char text[200];
	
	
	fptr = fopen("C:\\Users\\ZBOOK\\OneDrive\\Desktop\\C.programs\\file.txt","w");
	
	if (fptr == NULL){
		printf("The file cannot be opened");
		
	}
	printf("enter the text");
	scanf("%s\n",&text);
	
	fprintf(fptr,"%s",text);
	fclose(fptr);
	printf("file created successfully");
	return 0;
}
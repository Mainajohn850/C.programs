//output.txt
#include <stdio.h>
#include <stdlib.h>

int main (){
	FILE *file;
	char paragraph[201];
	
	file = fopen ("C:\\Users\\ZBOOK\\OneDrive\\Desktop\\C.programs\\output.txt","w");
	if ( file == NULL){
		 //printf("Error opening the file");
		 
	 }
	 printf("Enter a paragraph with up to 200 characters");
	 dfgets(paragraph,sizeof(paragraph),stdin);//
	 
	 file = fopen ("C:\\Users\\ZBOOK\\OneDrive\\Desktop\\C.programs\\output.txt","r");
	 
	 return 0;
	 
}
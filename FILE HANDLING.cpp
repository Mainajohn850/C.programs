//c file handling : writing to a file
#include<stdio.h>
#include<stdlib.h> 
 = fopen("c:\\Users\\ZBOOK\\OneDrive\\Documents\\New folder\\file x","w" );
	 if(fptr==NULL){
		 printf("Error opening the file");
		 exit(1);
		 
	 }
	printf("Enter any number");
	scanf("%d",number);
	
	fprintf(fptr,"The number entered is %d",number);
	fclose(fptr);
	printf("Number written successfully");
	
	return 0;
}    

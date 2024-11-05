//program that reads the names and marks of 5 student 
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fptr;
	char name[35];
	int marks, i;
	
	fptr = fopen("C:\\Users\\ZBOOK\\OneDrive\\Desktop\\C.programs\\students.txt","w");
	if (fptr == NULL){
		printf("Error opening the file.\n");
		exit(1);
	}
	for (i = 1; i <= 5; i++){
		printf("Enter name of student %d:",i);
		scanf("%s", name);
		printf("Enter marks of student %d:",i);
		scanf("%d", &marks);
		
		fprintf(fptr, "student %d:Name = %s, Marks = %d\n",i,name,marks);
	}
	fclose(fptr);
	printf("written successfully to student.txt.\n");
	return 0;
}
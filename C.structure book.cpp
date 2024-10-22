//c structure book
#include<stdio.h>
#include<string.h>

struct book{
	char title[30];
	char author[10];
	int publication_year;
	int isbn;
	float price;
} book1;
int main(){
	//strcpy(book1.title, "introduction to c programing");
   //	strcpy(book1.author,"john smith");
    //book1.publication_year = 2022;
    //book1.isbn = 97801365846557;
    //book1.price = 49.99;
     //printf("title:%s\n",book1.title);
     //printf("author:%s\n",book1.author);
     //printf("publication_year:%d\n",book1.publication_year);
     //printf("isbn:%d\n",book1.isbn);
     //printf("price:%2f\n", book1.price);
	
	 
	 printf("Enter the title of the book,the author,publication_year,isbn and price");
    scanf("%s%s%d%d%2f",book1.title,book1.author,book1.publication_year,book1.isbn,book1.price);
	
	return 0;
}

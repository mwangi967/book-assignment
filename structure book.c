#include<stdio.h>
#include<string.h>


struct book {
    char Title[30];
    char Author[30];
    int publicationyear;  
    char ISBN[13];
    float price;
} book;

int main() {
	
	struct book  book;
	
    printf("Enter the Title");
    scanf("%s", &book.Title);
    
    printf("Enter the Author");
    scanf("%s", &book.Author);
    
    printf("Enter the publicationyear");
    scanf("%d", &book.publicationyear);

	printf("Enter the ISBN");
	scanf("%s", &book.ISBN);
	
	printf("Enter the price");
	scanf("%f", &book.price);
	
	printf("the book is %s/%s/%d/%s/%f", book.Title,book.Author,book.publicationyear,book.ISBN,book.price);
	
return 0;
}

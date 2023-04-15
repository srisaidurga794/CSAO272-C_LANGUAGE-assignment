#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100 

struct Book {
    char title[50];
    char author[50];
    int id;
    int quantity;
};

struct Book library[MAX_BOOKS]; 
int num_books = 0; 
void add_book() {
    if(num_books >= MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }
    
    struct Book book;
    
    printf("Enter book details:\n");
    printf("Title: ");
    scanf("%s", book.title);
    printf("Author: ");
    scanf("%s", book.author);
    printf("ID: ");
    scanf("%d", &book.id);
    printf("Quantity: ");
    scanf("%d", &book.quantity);
    
    library[num_books] = book;
    num_books++;
    
    printf("Book added successfully.\n");
}

void display_books() {
    if(num_books == 0) {
        printf("Library is empty.\n");
        return;
    }
    
    printf("ID\tTitle\tAuthor\tQuantity\n");
    for(int i=0; i<num_books; i++) {
        printf("%d\t%s\t%s\t%d\n", library[i].id, library[i].title, library[i].author, library[i].quantity);
    }
}

void list_books_by_author() {
    char author[50];
    printf("Enter author name: ");
    scanf("%s", author);
    
    printf("Books by author '%s':\n", author);
    printf("ID\tTitle\tAuthor\tQuantity\n");
    for(int i=0; i<num_books; i++) {
        if(strcmp(library[i].author, author) == 0) {
            printf("%d\t%s\t%s\t%d\n", library[i].id, library[i].title, library[i].author, library[i].quantity);
        }
    }
}

void count_books() {
    printf("Total number of books in the library: %d\n", num_books);
}

int main() {
    int choice;
    
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                add_book();
                break;
            case 2:
                display_books();
                break;
            case 3:
                list_books_by_author();
                break;
            case 4:
                count_books();
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while(choice != 5);
    
    return 0;
}


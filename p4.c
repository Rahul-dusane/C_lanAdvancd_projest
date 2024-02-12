#include <stdio.h>
#include <string.h>

struct library {
    int accession_num;
    char title[50];
    char author_name[30];
    int price_book; 
} b[10];

int main() {
    int i, j = 0;
    printf("\n\nWelcome TO Library\n\n\n");
    printf("Enter the necessary details of books.\n\n");
    for (i = 0; i < 5; i++) {
        printf("Enter accession number of the book.\n");
        scanf("%d", &b[i].accession_num);
        printf("Enter author name.\n");
        scanf("%s", b[i].author_name);
        printf("Enter title of the book.\n");
        scanf("%s", b[i].title);
        printf("Enter price of book.\n");
        scanf("%d", &b[i].price_book); 
        getchar();
        j++;
    }
    int choice;
    
    printf("\n\nOptions :\n\n1) To add more information about book press '1'\n2) To see the details of books press '2'\n3) To see all the books of an author press '3'\n4) To see the title of all books press '4'\n5) To see the total number of books in library press '5'\n6) To see the list of books with accession number press '6'\n7) To leave site press '7'\n");
    printf("\nEnter your choice.\n");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter the necessary details of books.\n");
            for (i = 5; i < 10; i++) { 
                printf("Enter author name.\n");
                scanf("%s", b[i].author_name);
                printf("Enter title of the book.\n");
                scanf("%s", b[i].title);
                printf("Enter price of book.\n");
                scanf("%d", &b[i].price_book);
                getchar();
            }
            break;
        case 2:
            for (i = 0; i < 5; i++) {
                printf("\nAccession_number: %d\tAuthor: %s\tTitle of book: %s\tPrice: %d\n", b[i].accession_num, b[i].author_name, b[i].title, b[i].price_book);
            }
            break;
        case 3:
            char author[30];
            printf("Enter author name to see their books.\n");
            scanf("%s", author);
            for (i = 0; i < 5; i++) {
                if (strcmp(b[i].author_name, author) == 0) {
                    printf("\n%d\t%s\t%s\n", b[i].accession_num, b[i].title, b[i].author_name);
                }
            }
            break;
        case 4:
            for (i = 0; i < 5; i++) {
                printf("\n%d\t%s\n", b[i].accession_num, b[i].title);
            }
            break;
        case 5:
            printf("There are %d books in the library.\n", j);
            break;
        case 6:
            for (i = 0; i < 5; i++) {
                printf("\n%d\t%s\n", b[i].accession_num, b[i].title);
            }
            break;
        case 7:
            return 0;
            break;
        default:
            printf("Enter valid choice.\n");
    }

    return 0;
}

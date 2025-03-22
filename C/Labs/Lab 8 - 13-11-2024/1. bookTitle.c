#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
    int pages;
};

int main() {
    struct Book books[3];
    int i, maxIndex = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter details for book %d\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Pages: ");
        scanf("%d", &books[i].pages);
    }

    for (i = 1; i < 3; i++) {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
    }

    printf("\nBook with the highest price:\n");
    printf("Title: %s\n", books[maxIndex].title);
    printf("Author: %s\n", books[maxIndex].author);
    printf("Price: %.2f\n", books[maxIndex].price);
    printf("Pages: %d\n", books[maxIndex].pages);

    return 0;
}
/**
Output:
*/

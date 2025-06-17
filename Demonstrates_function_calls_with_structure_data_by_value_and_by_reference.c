#include <stdio.h>
struct book {
    char name[25];
    char author[25];
    int pages;
};
void display1(char *n, char *a, int pg) {
    printf("%s %s %d\n", n, a, pg);
}
void display2(struct book b) {
    printf("%s %s %d\n", b.name, b.author, b.pages);
}
void display3(struct book *b) {
    printf("%s %s %d\n", b->name, b->author, b->pages);
}
int main() {
    struct book b1 = { "Let Us C", "YPK", 464 };
    display1(b1.name, b1.author, b1.pages); 
    display2(b1);                          
    display3(&b1);                          // pointer to structure

    return 0;
}
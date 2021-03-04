#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Books
{
    char title[50];
    int id;
};

int main(){
    struct Books book1;
    strcpy(book1.title,"happy");
    book1.id=120;

    printf("%s  %d\n",book1.title,book1.id);
    system("pause");
    return 0;
}
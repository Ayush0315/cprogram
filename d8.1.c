#include <stdio.h>
#include <stdlib.h>
struct book
{
    char title[10];
    char author[10];
    float price;
    int bookid;
};
typedef struct book B;
void read(B *b)
{
     printf("Enter the book details\n");
     scanf("%s\n%s\n%f\n%d",b->title,b->author,&(b->price),&(b->bookid));
}

void print(B *b)
{
    printf("The book details are\n");
    printf("%s\n%s\n%f\n%d\n",b->title,b->author,(b->price),(b->bookid));
}
int main()
{
   B b;
   B *s=&b;
   read(s);
   print(s);
   return 0;       
}
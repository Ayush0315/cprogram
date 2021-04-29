#include <stdio.h>
struct book
{
    char title[10];
    char author[10];
    int price;
    int bookid;
};

void read(struct book *);
void print(struct book *);

int main()
{
   struct book bk;
   struct book *sptr=&bk;
   read(sptr);
   print(sptr);
   return 0;     
}      
   
 void read(struct book *b) 
{
     printf("Enter the book details\n");
     scanf("%s\n%s\n%d\n%d",b->title,b->author,&(b->price),&(b->bookid));                     
}

void print(struct book *b) 
{
    printf("The book details are\n");
    printf("\n%s\n%s\n%d\n%d\n",b->title,b->author,(b->price),(b->bookid));             
}
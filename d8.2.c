#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
    char title[10];
    char author[10];
    float price;
    int no_pages;
};typedef struct book B;
void read(B *b,int n)
{
     
     for(int i=0;i<n;i++)
     {
     	printf("Enter the title, author name, price and number of pages in order\n");
     	scanf("%s\n%s\n%d\n%d",b[i].title,b[i].author,&(b[i].price),&(b[i].no_pages));
     }	
}
void update(B *b,int n)
{
    int i;char t[10];
    printf("Enter the title to be searched\n");
    scanf("%s",t);
    for(i=0;i<n;i++)
     {
         if(!strcmp(b[i].title,t))
         {
             printf("enter the new price of the book\n");
             scanf("%f",&(b[i].price));
             return;
         }
         else
             continue;
     }
     printf("updation not succesfull\n");
}
void print(B *b,int n)
{
    int i;
    printf("The book details are\n");
    for(i=0;i<n;i++)
    	printf("%s\t%s\t%f\t%d\n",b[i].title,b[i].author,b[i].price,b[i].no_pages);
    if(i!=0)
	printf("entery sucessfull\n");	
}
int main()
{
   B bk[10];
   int n;
   printf("enter the no of entries\n");
   scanf("%d",&n);
   read(bk,n);
   print(bk,n);
   update(bk,n);
   print(bk,n);
   return 0;       
}
#include<stdio.h>
#include<conio.h>
int item;
struct node
{
int data;
struct node *link;
};
struct node *top=NULL;
void push();
void pop();
void display();
int main()
{
int choice;
char ch;
while(1)
{
printf("\n1:push\n");
printf("\n2:pop\n");
printf("\n3:display\n");
printf("\n4:exit\n");
printf("\nenter your choice:-");
scanf("\n%d",&choice);
switch(choice)
{
case 1:push();
       break;
case 2:pop();
       break;
case 3:display();
       break;
case 4:exit(0);
default:printf("\nyou entered wrong choice");
}
}
return 0;
}
void push()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("\nenter the element:- ");
scanf("%d",&temp->data);
temp->link=NULL;
if(top==NULL)
top=temp;
else
{
temp->link=top;
top=temp;
}
}
void pop()
{
struct node *temp;
if(top==NULL)
{
printf("\nstack is empty");

}
else
{
temp=top;
item=top->data;
top=top->link;
free(temp);
printf("the popped element is %d",item);
}
}

void display()
{
struct node *temp=top;
if(temp==NULL)
printf("\nstack is empty");
else
{
printf("\nthe element in stacks are:-");
while(temp!=NULL)
{
printf("\n%d",temp->data);
temp=temp->link;
}
}
}
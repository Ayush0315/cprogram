#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20

int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int ele;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        ele=s[top];
        printf("\n poped element is %d",ele);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int ch,n;
    while(1)
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\n Enter any element to push :: ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    return 0;
}
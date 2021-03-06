#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct name{
    char names[50];
    struct name *link;
}nm;

nm* insert(nm *);
nm* del_pos(nm *);
nm* del_nam(nm *);

int main()
{
    nm *t,*first=NULL;
    int n;
    printf("Enter total no. of names to insert: ");
    scanf("%d",&n);
    while(n--)
       first=insert(first); 
    printf("\nAfter insertion list\n");
    for(t=first;t!=NULL;t=t->link)
        printf("%s\n",t->names);

    first=del_pos(first);
    printf("\nUpdated list\n");
    for(t=first;t!=NULL;t=t->link)
        printf("%s\n",t->names);

    first=del_nam(first);
    printf("\nUpdated list\n");
    for(t=first;t!=NULL;t=t->link)
        printf("%s\n",t->names);
    return 0;
}

nm* insert(nm *f)
{
    nm *t,*l,*p;
    t=(nm*)malloc(sizeof(nm));
    t->link=NULL;
    printf("Enter name: ");
    scanf("%s",t->names);
    if(f==NULL)
        return t;
    for(p=0,l=f;l!=NULL;p=l,l=l->link)
    {
        if(l->names[0]>t->names[0] && l==f){
            t->link=l;
            return t;
        }
        else if(l->names[0]>t->names[0]){
            t->link=l;
            p->link=t;
            return f;
        }
    }
    p->link=t;
    l=t;
    return f;
}

nm* del_pos(nm *f)
{
    nm *t,*p;
    int pos;
    printf("\nEnter pos to del item: ");
    scanf("%d",&pos);
    pos--;
    for(p=0,t=f;t!=NULL;p=t,t=t->link,pos--)
    {
        if(pos==0)
        {
            if(t==f)
            {
                printf("Deleted name: %s\n",t->names);
                t=t->link;
                return t;
            }
            else
            {
                printf("Deleted name: %s\n",t->names);
                p->link=t->link;
                free(t);
                return f;
            }
        }
    }
    printf("Position is not valid\n");  
}

nm* del_nam(nm *f)
{
    char str[100];
    printf("\nEnter string to del: ");
    scanf("%s",str);
    nm *t,*p;
    for(p=0,t=f;t!=NULL;p=t,t=t->link)
    {
        if(strcmp(str,t->names)==0)
        {
            if(t==f)
            {
                printf("Deleted name: %s\n",t->names);
                t=t->link;
                return t;
            }
            else
            {
                printf("Deleted name: %s\n",t->names);
                p->link=t->link;
                free(t);
                return f;
            }
        }
    }
    printf("Name not found\n");
}
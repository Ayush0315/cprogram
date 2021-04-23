# include<stdio.h>
void accept(int *arr,int size)
{
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
}
int main()
{
    int arr[20],size;
    int first,last,flag=0,elem;
    printf("enter the number of elements\n");
    scanf("%d",&size);
    printf("enter the elements\n");
    accept(arr,size);
    printf("enter the element to search\n");
    scanf("%d",&elem);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==elem)
        {
            flag++;
            if(flag==1)
            {
                first=i+1;
                last=i+1;
            }
            else if(flag>1)
                last=i+1;
        }
    }
    if(!flag)
    {
        printf("element not found\n");
        return 0;
    }
    printf("element found\n");
    printf("element :%d\nlast :%d",first,last);
    return 0;
    
    
}
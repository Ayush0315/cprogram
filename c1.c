#include <stdio.h>
#include<stdlib.h>

int main()
{
    // array declaration 
    int arr[10], arr_size,n;
    printf("Enter the number of elements \n");
    scanf("%d",&arr_size);
    printf("Enter the array elements \n");
    for(int i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
    printf("The elements are \n");
        for(int i=0;i<n;i++)
    {
         printf("%d",arr[i]);
    }
    printf("\nThe even numbers in the array are\n");
    for(int i=0;i<n;i++)
    {
         if(arr[i]%2==0)
            printf("%d\t", arr[i]);
    }
    return 0;
}

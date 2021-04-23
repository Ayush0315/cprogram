#include <stdio.h>
void read_arr(int arr[10],int arr_size)
{
     printf("Enter the array elements \n");
    for(int i=0;i<arr_size;i++)
    {
         scanf("%d",&arr[i]);
    }
}
void print_arr(int arr[10],int arr_size)
{
        for(int i=0;i<arr_size;i++)
    {
         printf("%d\t",arr[i]);
    }
    
}
void print_odd( int arr[10],int arr_size)
{
     for(int i=0;i<arr_size;i++)
    {
         if(arr[i]%2!=0)
            printf("%d\t", arr[i]);
    }
}
int main()
{
    // array declaration 
    int arr[10], arr_size;
    printf("Enter the number of elements\n");
    scanf("%d", &arr_size);
    read_arr(arr, arr_size);
    printf("The array elements are\n");
    print_arr(arr, arr_size);
    printf("The  odd elements are\n");
    print_odd(arr, arr_size);
    return 0;
}  

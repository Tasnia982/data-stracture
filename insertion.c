#include<stdio.h>
int main()
{

    int arr[100];
    int i,n,size;
    printf("Enter array size:");
    scanf("%d",&size);
    printf("Enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int position;
    printf("Enter the positon you change: ");
    scanf("%d",&position);
     printf("Enter the value: ");
    scanf("%d",&n);

    for(i=size-1;i>=position-1;i--)
    {
        arr[i+1]= arr[i];

    }
    arr[position-1]=n;

    printf("Final array:");

    for(i=0;i<=size;i++)
    {
        printf("%d ",arr[i]);
    }



    return 0;
}

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter array elements\n");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Original array\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Array in reverse order\n");

    for(int i=n-1 ; i>=0 ; i--)
    {
        printf("%d ",arr[i]);
    }

}

#include <stdio.h>
int main() {
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0,k=n-1,temp;

    while(j<k)
    {
        temp=arr[j];
        arr[j]=arr[k];
        arr[k]=temp;

        j+=2;
        k-=2;
    }
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}

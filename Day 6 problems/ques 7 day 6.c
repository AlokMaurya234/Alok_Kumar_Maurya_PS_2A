#include<stdio.h>
int main()
{
    int arr[100],n;
    printf("Enter the length of array : ");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(int i=0 ; i< n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0 ; i<n ; i++)
    {
        int count=0;
        for(int j=0 ; j<n ; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d\t",arr[i]);
        }
    }

    return 0;
}

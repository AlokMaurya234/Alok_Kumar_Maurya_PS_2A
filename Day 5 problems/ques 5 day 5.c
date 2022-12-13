#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    //int a[n];
    for(int i=1 ; i<=n ; i+=2)
    {
       printf("%d ",i);
    }
    for(int j=2 ; j<=n ; j+=2)
    {
        printf("%d ",j);
    }
}

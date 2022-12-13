#include<stdio.h>
int prime_fac(int n)
{   int a[n];
    for(int i=1 ; i<n ; i++)
    {
        if(a[i]==1)
            return 1;
        if(a[i]%2==0)
            return 2;

    }
}
int main()
{
    int n,fac;
    printf("Enter a number : ");
    scanf("%d",&n);
    fac=prime_fac(n);
    printf("%d ",fac);
    return 0;
}

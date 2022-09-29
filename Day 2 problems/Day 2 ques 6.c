 #include<stdio.h>
 int main()
 {

     int i,j,k,s,n;
    printf("enter the value of n\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {    k=i;
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",k++);
        }
        k=k-2;
        for(j=1;j<i;j++)
        {
            printf("%d",k--);
        }
        printf("\n");
    }
    return 0;

 }

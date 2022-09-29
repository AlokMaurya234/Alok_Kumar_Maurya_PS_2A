#include <stdio.h>

int main() {
    int n,p;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        p=i;
        for(int j=1 ; j<=i ; j++)
        {
            printf("%d",j);
        }

        for(int s=1 ; s<=2*(n-i) ; s++)
        {
            printf(" ");
        }
        for(int j=1 ; j<=i ; j++)
        {
            printf("%d",p);
            p--;
        }
        printf("\n");
    }
    return 0;
}

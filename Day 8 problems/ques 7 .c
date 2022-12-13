#include <stdio.h>

int main()
{
    int num,flag=1;
    printf("Enter any number : ");
    scanf("%d", &num);
    for(int i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            for(int j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    flag= 0;
                    break;
                }
            }
            if(flag==1)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}

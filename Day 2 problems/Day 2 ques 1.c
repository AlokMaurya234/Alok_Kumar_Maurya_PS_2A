
#include <stdio.h>

int main() {

    for(int i=0 ; i<=4 ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            if(i>=j)
            printf("%d",i+j-1);
        }
        printf("\n");
    }

    return 0;
}

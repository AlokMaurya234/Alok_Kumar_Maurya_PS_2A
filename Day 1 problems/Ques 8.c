#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the points x and y\n");
    scanf("%d %d",&x,&y);

    if(x>0 && y>0)
        printf("point x and y lies in 1st quadrant");
    else if(x<0 && y>0)
        printf("point x and y lies in 2nd quadrant");
    else if(x>0 && y<0)
        printf("point x and y lies in 4th quadrant");
    else
        printf("point x and y lies in 3rd quadrant");
}

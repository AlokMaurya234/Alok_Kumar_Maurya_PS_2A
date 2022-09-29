#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three sides of triangle\n");

    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a==b && b==c)
        printf("its a equilateral triangle");
    else if( (a==b ) || (b==c)|| (c==a) )
        printf("its an isosceles triangle");
    else
        printf("its a scalene triangle");
}

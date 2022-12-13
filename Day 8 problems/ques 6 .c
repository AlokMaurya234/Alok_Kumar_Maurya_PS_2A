#include<stdio.h>
int main()
{
    int r;
    printf("Enter the radius of circle : ");
    scanf("%d",&r);
    printf("Area of circle : %f\n",3.14*r*r);
    printf("max. possible area of rect. that can inscribed in circle : %d",2*r*r);
}

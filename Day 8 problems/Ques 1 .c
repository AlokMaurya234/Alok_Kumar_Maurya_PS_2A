#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,disc;
    float r1,r2,realP,imgP;
    printf("Enter the values of a , b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    disc=(b*b)-(4*a*c);

    if(disc>0)
    {
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("root1 = %.2f and root2 = %.2f", r1, r2);
    }

    else if (disc== 0) {
        r1 = r2 = -b / (2 * a);
        printf("root1 = root2 = %.2f", r1);
    }

    else {
        realP = -b / (2 * a);
        imgP = sqrt(-disc) / (2 * a);
        printf("root1 = %.2f+%.2f and root2 = %.2f -%.2f", realP, imgP, realP, imgP);
    }

    return 0;
}

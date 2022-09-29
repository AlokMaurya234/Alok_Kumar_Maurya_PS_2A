#include<stdio.h>
#include<math.h>
int main()
{
    int BS,hra,da,allow,pf,TS;
    char grade;

    printf("Enter the Basic Salary : ");
    scanf("%d", &BS);

    while((getchar()) != '\n');
    printf("Enter the grade : ");
    scanf("%c",&grade);

    hra = 0.2 * BS;
    da=0.5*BS;
    pf=0.11*BS;

    if(grade=='A')
    {
        allow=1700;
    }
    else if(grade=='B')
    {
        allow=1500;
    }
    else if(grade=='C')
    {
        allow=1300;
    }
    else
    {
        allow=1300;
    }
    TS=round(BS+hra+da+allow-pf);
    printf("%d",TS);
}

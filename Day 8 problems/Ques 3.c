#include<stdio.h>
int sum(int num)
{
    int sum=0;
    while(num>0||sum<10)
    {
        if(num == 0)
        {
            num=sum;
            sum = 0;
        }
        sum += num % 10;
        num=num/10;
    }
    return sum;

}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    int result;
    result=sum(num);
    printf("%d",result);
    return 0;
}

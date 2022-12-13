#include<stdio.h>
int main()
{
    int n;
    float x,sum,t,d;
    printf("enter the Value of x :");
	scanf("%f",&x);
	printf("enter the number of terms : ");
	scanf("%d",&n);
	sum =1; t = 1;
	for (int i=1;i<n;i++)
	{
	  d = (2*i)*(2*i-1);
	  t = -t*x*x/d;
	  sum =sum+ t;
	}

	printf("sum of series is %f ",sum);
	return 0;

}

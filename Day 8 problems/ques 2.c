#include<stdio.h>
#include<math.h>
int kthdigit(int a, int b, int k)
{
	int p = pow(a, b);
	int count = 0;
	while (p > 0 && count < k) {
		int rem = p % 10;
		count++;
		if (count == k)
			return rem;
		p = p / 10;
	}
	return 0;
}
int main()
{
	int a,b;
	int k;
	int dd;
	printf("Enter the value of a , b and k : ");
	scanf("%d %d %d",&a,&b,&k);
	dd= kthdigit(a, b, k);
	printf("%d ",dd);
	return 0;
}

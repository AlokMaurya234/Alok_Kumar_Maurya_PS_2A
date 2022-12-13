#include<stdio.h>
#define N 3
void rotate(int arr[N][N])  //AntiClockwise.
{
	for (int j = N-1; j >=0; j--)
	{
		for (int i = 0; i<N ; i++)
         {
             printf("%d ",arr[i][j]);  }
		printf("\n");
	}
}
int main()
{
	int arr[N][N];
	 printf("enter matrix element\n");
	 for(int m=0 ; m<N ; m++)
     {
         for(int n=0 ; n<N ; n++)
         {
             scanf("%d",&arr[m][n]);
         }
     }
	rotate(arr);
	return 0;
}


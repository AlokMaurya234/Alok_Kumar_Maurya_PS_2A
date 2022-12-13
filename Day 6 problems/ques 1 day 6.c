#include<stdio.h>
#define N 3
void rotate(int arr[N][N]) //Clockwise.
{
    for(int k=0 ; k<2 ; k++)
     {for (int j = 0; j < N; j++)
	{
		for (int i = N - 1; i >= 0; i--)
         {
             printf("%d ",arr[i][j]);  }
		printf("\n");
	} }
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

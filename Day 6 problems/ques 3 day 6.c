#include<stdio.h>


int main()
{
    int m,n;
    printf("Enter the length of row and col\n");
    scanf("%d %d",&m,&n);
    int matrix[m][n];
     if(n != m){
        printf("Length of row and column should be equal.");
    }
    else
  {
      printf("Input the element of matrix: ");
    for(int i = 0; i < n; i++)
     {
         for(int j = 0; j < m; j++)
         {
             scanf("%d",&matrix[i][j]);
         }
     }
     int sum1=0;
     for(int i=0 ; i<m ; i++)
     {
         for(int j=0 ; j<n ; j++)
         {
             if(i==j)
             sum1=sum1+matrix[i][j];
         }
     }

     for(int i=0 ; i<m ; i++)
     {
         int sum2=0;
         for(int j=0 ; j<n ; j++)
         {
             sum2=sum2+matrix[i][j];
         }
         if(sum2!=sum1)
         {
             printf("given matrix is not magic matrix\n");
             return;
         }
     }
     for(int i=0 ; i<m ; i++)
     {

        int sum3=0;
        for(int j=0 ; j<n ; j++)
        {
            sum3= sum3+matrix[j][i];
        }
        if(sum3!=sum1)
        {
             printf("given matrix is not magic matrix\n");
             return;
        }
        else
        {
            printf("given matrix is magic\n");
        }

  }
}
return 0;
}

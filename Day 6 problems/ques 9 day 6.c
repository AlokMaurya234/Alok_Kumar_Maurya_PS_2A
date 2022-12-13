#include <stdio.h>

int printCommon(int arr1[], int m, int arr2[],int n) {

   int i,j;

   for(i = 0; i < m ;i++) {

      for(j = 0; j < n ;j++) {

        if(arr1[i] == arr2[j]){

           printf(" Common elements is %d", arr1[i]);

          }
       }
    }
}

int main(void) {
    int m,n;
    printf("Enter the size of first and second array\n");
    scanf("%d %d",&m,&n);

   int arr1[m],arr2[n];
   printf("Enter array elements of 1st arr\n");
   for(int i=0 ; i<m ; i++)
   {
       scanf("%d",&arr1[i]);
   }
    printf("Enter array elements of 2nd arr\n");
   for(int i=0 ; i<n ; i++)
   {
       scanf("%d",&arr2[i]);
   }

   printCommon(arr1,m,arr2,n);

   return 0;
}

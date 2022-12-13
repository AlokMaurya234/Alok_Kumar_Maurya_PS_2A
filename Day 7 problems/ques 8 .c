#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    printf("Enter a string : ");
    gets(str);
    int len;
    len=strlen(str);

    for(int i=0 ; i<len ; i++)
    {
        for(int j=0 ; j<i ; j++)
        {
            if(j==0)
           {
               printf("%c",str[j]);
           }
           else{
            for(j=1;j<=i;j++){
                 if(j==i)
                 printf("\n");
                 printf("%c",str[j]);
           }
        }
     }
  }
      return 0;
 }

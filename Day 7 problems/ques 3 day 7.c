#include<stdio.h>

int str_len(char str[]);


int main()
{
    int length;
    char str[1000];
    char str2[1000];
    printf("enter string\n");
    gets(str);
    length=str_len(str);
   //printf("The length of string is %d \n",length);
    for(int i=length-1 ; i>=0 ; i--)
    {
        str2[i]=str[i];
        printf("%c",str2[i]);
    }
    printf("\n");

     if(str[length]==str2[length])
     {
         printf("string is palindrome \n");
     }
     else
     {
         printf("string is not palindrome");
     }


    return 0;
}

int str_len(char str[])
{
    int len=0;
    while(str[len]!='\0')  //string end with /0 in c.
    {
        len++;
    }
    return (len);
}



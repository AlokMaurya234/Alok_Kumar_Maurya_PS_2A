#include<stdio.h>
#include<string.h>

int compare(char s1[],char s2[])
{
    int flag=0, i=0;
    while(s1[i]!='\0'&&s2[i]!='\0')
    {
       if(s1[i]!=s2[i])
       {
           flag=1;
           break;
       }
       i++;
    }
    if(flag==0)
    return 0;
    else
    return 1;
}
int main()
{
    char s1[100],s2[100];
    int c=0 ;
    printf("Enter first string\n");
    gets(s1);
    printf("Enter second string\n");
    gets(s2);
    c=compare(s1,s2);
    if(c==0)
   printf("strings are same");
   else
   printf("strings are not same");

    return 0;
}

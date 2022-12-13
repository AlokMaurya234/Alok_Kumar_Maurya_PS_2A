#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[100];
    int len,flag=1;
    printf("Enter any string : ");
    gets(s);
    len=strlen(s);

    for(int i=0 ; i<len ; i++)
    {
        if( (s[0]>='a'&& s[0]<='z') ||( s[0]>='A' && s[0]<='Z') || (s[0]>='0'&& s[0]<='9') || (s[0]=='_') )
        {
            flag=1;
        }
            else
            {
                flag=0;
            }
    }

    if(flag==1)
    {
        printf("Entered string is valid identifier : ");
        puts(s);
    }
    else
    {
        printf("Entered string is not a valid identifier.");
    }
}

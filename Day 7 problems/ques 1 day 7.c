#include<stdio.h>

int str_len(char str[]);

int main()
{
    int length;
    char str[1000];
    printf("enter string\n");
    gets(str);
    length=str_len(str);
    printf("The length of string is %d ",length);

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

#include<stdio.h>
#include<string.h>

void con_str(char str1[],char str2[])
{
    int i;

    int j = strlen(str1);

    for (i = 0; str2[i] != '\0'; i++) {
        str1[i + j] = str2[i];
    }
    //str1[i + j] = '\0';
    return;
}
int main()
{
    char str1[1000],str2[1000];
    printf("Enter str1 : ");
    gets(str1);
    printf("Enter str2 : ");
    gets(str2);
    con_str(str1,str2);
    printf("Concatenated String is: '%s'\n", str1);
    return 0;
}

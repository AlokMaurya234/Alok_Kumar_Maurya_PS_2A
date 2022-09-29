#include<stdio.h>
void main()
{
      char a;
    printf(" enter a character\n");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='u')
        printf("%c is vowel",a);
    else
        printf("%c is consonant",a);
}

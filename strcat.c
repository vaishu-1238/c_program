#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10]={'v','a','i','s','h','\0'};
    char s2[]={'n','a','v','i','\0'};
    strcat(s1,s2);
    printf("After concateting of s1 is %s",s1);
}
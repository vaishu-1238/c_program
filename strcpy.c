#include<stdio.h>
#include<string.h>
int main()
{
    char s1[6]={'m','a','n','g','o','\0'};
    char s2[6];
    printf("String of s1 is %s",s1);
    strcpy(s2,s1);
    printf("String of s2 is %s",s2);
}
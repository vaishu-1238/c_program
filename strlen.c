#include<stdio.h>
#include<string.h>
int main()
{
    char  s1[]={'h','e','l','l','o','\0'};
    char s2[10]={'w','o','r','k','\0'};
    int len;
    printf("String is %s\n\n",s1);
    printf("String is %s\n\n",s2);
    
    
    len=strlen(s1);
    printf("length of  a string s1 is %d\n",len);
    len=strlen(s2);
    printf("length of  a string s2 is %d",len);
    return 0;
}
#include<stdio.h>
int main()
{
    float principal,rate,term,simple_intereset;
    printf("Enter the amount of principal:");
    scanf("%f",&principal);
    printf("Enter rate of interest:");
    scanf("%f",&rate);
    printf("Enter term:");
    scanf("%f",&term);
    simple_intereset=((principal*rate*term)/100);
    printf("simple interest:%f",simple_intereset);
    return 0;
}

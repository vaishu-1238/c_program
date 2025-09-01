#include<stdio.h>
int main()
{
    int arr[5]={2,4,6,8,10};
    printf("Printing array elements\n");
    for(int i=4;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
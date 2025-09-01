#include<stdio.h>
void insert(int arr[],int*n,int val){
    arr[*n]=val;
    (*n)++;
}
int main()
{
    int arr[7]={10,20,30,40,50};
    int n=5;
    int val=33;
    insert(arr,&n,val);
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}
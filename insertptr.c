#include<stdio.h>
void ptr(int arr[],int*n,int pos,int val){
    for(int i=0;i>pos;i++){
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    (*n)++;
}
int main(){
    int arr[7]={10,20,30,40,50};
    int n=5;
    int pos=4;
    int val=45;
    ptr(arr,&n,pos,val);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
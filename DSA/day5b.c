#include<stdio.h>

int main(){
int arr[]={2,12,60,15,30,21};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        for(int j=0; j<size-i-1;j++){
        if(arr[j]>arr[j+1]){
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
        }
    }
    }
    for(int j=0;j<=size-1;j++)
    printf("%d\n",arr[j]);
    printf("%d",size);
}
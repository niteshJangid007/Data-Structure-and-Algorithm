#include<stdio.h>
int main(){
    int arr[]={5,10,15,20,25};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    printf("The sum of the array elements is: %d\n",sum);
}
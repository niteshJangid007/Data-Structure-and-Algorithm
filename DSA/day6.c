#include<stdio.h>
int main(){
    int arr[5]={2,12,60,39,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key,i;
    for(int i=1; i<5; i++){
    int key=arr[i];
   int j=i-1; 
   
        while(j>=0 & arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        
        arr[j+1]=key;
    }
    printf("The sorted array is:\n");
    for(int k=0;k<=size-1;k++){
    printf("%d\n",arr[k]);
    }
}
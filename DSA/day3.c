#include<stdio.h>
int main(){
    int arr[]={45,12,89,7,23};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=7;
    int foundIndex=-1;
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            foundIndex=i;
            break;
        }
    }
    if(foundIndex!=-1){
        printf("Element found at index: %d\n", foundIndex);
    }
    else{
        printf("Element not found\n");
    }
    
    printf("The size of the array is: %d\n", size);
    return 0;
}
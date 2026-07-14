#include<stdio.h>
int main(){
    int arr[5]={21,33,46,55,72};
    int target_index=2;
    int low=0;
    int high=5;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==arr[target_index]){
            printf("Element Found at index: %d\n", mid);
            break;
        }
        else if(arr[mid]<arr[target_index]){
            low=mid+1;
        }
        else{
            high=mid-1; 
        }
    }
}
#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int current_size=5;
    int target_index=2;
    for(int i=target_index;i<current_size-1;i++){
        arr[i]=arr[i+1];
    }
    current_size--;
    printf("Array after deletion:\n ");
    for(int i=0;i<current_size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
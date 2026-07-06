#include<stdio.h>
void insertion() {
    int number[6]={10,20,40,50,60};
     int current_size=5;
    int target_index=2;
    int new_value=30;
    for(int i=current_size; i>target_index; i--){
        number[i]=number[i-1];
    }
    number[target_index]=new_value;
    current_size++;
    printf("after insertion: ");
    for(int i=0;i<current_size;i++){
        printf("%d ",number[i]);
    }
}
void deletion() {
    int arr[5]={10,20,30,40,50};
    int current_size=5;
    int target_index=2;
    for(int i=target_index;i<current_size-1;i++){
        arr[i]=arr[i+1];
    }
    current_size--;
    printf("Array after deletion:\n ");
    for(int i=0;i<current_size;i++){
        printf("index %d ",arr[i]);
    }
}
void searching(){
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
}
int main(){
    insertion();
    printf("\n");
    deletion();
    printf("\n");
    searching();
    return 0;
}
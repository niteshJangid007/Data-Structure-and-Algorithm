#include<stdio.h>
int main(){
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
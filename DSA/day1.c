#include<stdio.h>
int main(){
    int number[5]={10,20,30,40,50};
    printf("The value stored at index 2 is %d",number[2]);
    printf("printing all array elements\n");
    for(int i=0;i<5;i++){
        printf("index %d: %d\n", i, number[i]);
    }
}
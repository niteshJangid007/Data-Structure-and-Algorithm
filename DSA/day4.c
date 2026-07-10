#include<stdio.h>
int main(){
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int transposed[3][2];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            transposed[j][i] = matrix[i][j];
        }
        printf("Original matrix (2*3):\n");
        for(int k = 0; k < 3; k++) {
            printf("%d ", matrix[i][k]);
        }
        printf("\n");
    }
    printf("Transposed matrix (3*2):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
    return 0;
}
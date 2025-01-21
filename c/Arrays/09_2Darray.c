#include<stdio.h>
int main(){
    // Initialize a 2D array
    int arr[2][3]={{1,2,3},{4,5,6}};
    // Display array elements
    printf("2d array elements:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("arr[%d][%d]=[%d], Address: %p\n",i,j,arr[i][j],&arr[i][j]);

        }
    }
    return 0;
}
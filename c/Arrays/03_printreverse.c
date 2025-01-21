#include<stdio.h>
int main(){
    int arr[5];
    // Loop to input 5 elements into the array
    for(int i=0;i<=4;i++){ 
        printf("Enter elemrnt num %d\n",i+1);
        scanf("%d",&arr[i]);
    }
     // Loop to print the elements of the array in reverse order
    for(int i=4;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;    
}
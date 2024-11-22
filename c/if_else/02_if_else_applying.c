#include<stdio.h>
int main(){
    int x;
    printf("write any number\n");
    scanf("%d",&x);
    if (x%2==0){//even
    printf("Even number");
    }
    else{//odd
        printf("Odd Number");
    }
    return 0;  
}
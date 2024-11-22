#include<stdio.h>
int main(){
    int n;
    printf("enter a three digit integer : ");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("the value is three digit intger");
    }
    else{
        printf("its not");
    }
    return 0;
}

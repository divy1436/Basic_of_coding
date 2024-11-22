#include<stdio.h>
int main(){
    int a;
    printf("Write a postive integer: ");
    scanf("%d",&a);
    if (a%5==0)
    {
        printf("yes divisble with 5!");
    }
    else{
        printf("not divisible");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a =5;
    int* b =&a;
    *b=9;
    printf("%p\n",a);
    printf("%p\n",&b);
    printf("%d\n",*b);
    printf("%d",a);
    return 0;
}
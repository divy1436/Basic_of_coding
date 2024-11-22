#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp= *x;// temp=2
    *x=*y; //a=9
    *y=temp; //*y=2-> b=2
    return;
}
int main(){
    int a=2;
    int b=9;
    swap(&a,&b);
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",b);
    int a1=5;
    int b2=6;
    swap(&a1,&b2);
    printf("the value of a is %d\n",a1);
    printf("the value of a is %d\n",b2);
    return 0;
}
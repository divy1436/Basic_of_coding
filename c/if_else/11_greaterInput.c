#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the value of a ,b, c,d");
    scanf("%d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("a is greather");
    }
    if(b>a && b>c && b>d){
    printf("b is greather");  
    }
    if(d>a && d>b && d>c){
        printf("d is greather");
    }
    else{
        printf("c is greather");
    }
    return 0;
}
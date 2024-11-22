#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the value of a ,b, c");
    scanf("%d %d %d",&a,&b,&c);
    
    if((a+b)>c && (b+c)>a && (c+a)>b){
    printf("Valid triangle");  
    }
    else{
        printf("Invaild triangle");
    }
    return 0;
}
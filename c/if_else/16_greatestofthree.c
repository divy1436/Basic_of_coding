#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the value of a ,b, c");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c)
            printf("%d is greater",a);
        else
            printf("%d is grester",c );
        
    }
    else{
        if(b>c)
        printf(" %d is greater",b);
        else
        printf("%d is greater",c );
    }
    return 0;
}
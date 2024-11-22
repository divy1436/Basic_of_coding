#include<stdio.h>
int main(){
    int n;
    printf("enter the marks");
    scanf("%d",&n);
    if(n>80){
        printf("excellent\n");
    }
    else if(n>60){
        printf("b grade\n");
    }
    else if(n>40){
        printf("c grade\n");
    }
    else{
        printf("d grade\n");
    }
    
    return 0;
}

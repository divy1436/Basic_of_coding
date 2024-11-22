#include<stdio.h>
int main(){
    int ram,shyam,gopal;
    printf("enter the age of ram,shyam,gopal");
    scanf("%d %d %d",&ram,&shyam,&gopal);
    if(ram>shyam){
        if(ram>gopal)
        printf("%d is younger",ram);
        else
        printf("%d is younger",gopal);
    }
    else{
        if(shyam>ram)
        printf("%d is younger",shyam);
        else
        printf("%d is younger",gopal);
    }
    return 0;
}


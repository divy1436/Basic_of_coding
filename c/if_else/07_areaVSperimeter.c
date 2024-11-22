#include<stdio.h>
int main(){
    int a;
    printf("Write the length of rectangle:");
    scanf("%d",&a);
    int b;
    printf("Write the bredth of rectangle:");
    scanf("%d",&a);
    int area=a*b;
    int peri=2*a+b;
    if(area>peri){
        printf("Area is greather");
    }
    else{
        printf("perimeter is greather");
    }
    return 0;
}
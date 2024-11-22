#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter first elements: ");
    scanf("%d,&arr[0]");
    printf("Enter second elements: ");
    scanf("%d,&arr[1]");
    printf("Enter thrid elements: ");
    scanf("%d,&arr[2]");
    

// float

    float a[3]={1.2,5.6,45.8};
    printf("%f\n",a[2]);

 // charcater

    char b[4]={'a','b','c','%'};
    printf("%c\n",b[2]);

    return 0;
}
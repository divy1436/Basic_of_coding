#include<stdio.h>
int main(){
    int marks[10];
    printf("Enter 10 the marks:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("enter marks %d:",i+1);
        scanf("%d",&marks[i]);
    
    }
    printf("marks less than 35 there roll numbers are:");
    for (int i = 0; i < 10; i++)
    {
        if(marks[i]<35){
            printf("%d\n",i);
        }
    }
    return 0;
    
}
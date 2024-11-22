#include<stdio.h>
int main(){
    int num1, num2, temp;
    printf("Enter First Number: \n");
    scanf("%d",&num1);
printf("Enter second Number: \n");
scanf("%d",&num2);
temp=num1;
num1=num2;
num2=temp;
 printf("After swapping:\n"); 
    printf("First Number = %d\n", num1); 
    printf("Second Number = %d\n", num2);
return 0;
}
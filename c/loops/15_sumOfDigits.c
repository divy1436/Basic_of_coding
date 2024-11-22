#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    int lastDigits=0;
    while(n!=0){
        lastDigits=n%10;
        sum=sum+lastDigits;
        n=n/10;
    }
    printf(" The digitd of digits are %d",sum);
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    int lastDigits=0;
    while(n!=0){
        lastDigits=n%10;
        if(n%2==0){
        sum=sum+lastDigits;

        }
        n=n/10;
    }
    printf(" The sum of even digits are %d",sum);
    return 0;
}
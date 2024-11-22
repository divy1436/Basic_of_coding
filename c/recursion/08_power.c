#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int reAns=a*power(a,b-1);
    // int x=1;
    // for(int i=1;i<=b;i++){
    //     x=x*a;
    // }
    return reAns;
    }

int main(){
    int a;
    printf("Enter a base :");
    scanf("%d",&a);
     int b;
    printf("Enter a power :");
    scanf("%d",&b);
    int p= power(a,b);
    printf("%d is rasised to the power of %d is %d" ,a,b,p);
    return 0;
    
}
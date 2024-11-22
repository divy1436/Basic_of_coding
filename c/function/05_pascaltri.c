#include<stdio.h>
// fuction to calculate factorial
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){ // formula for factorial
        fact=fact*i;
    }
    return fact;
}
// function to calculate combination nCr
int combination(int n, int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));    
}
int main(){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int first=1;
        printf("%d",first);
       // for (int j=0;j<=n-i-1;j++){
       //     printf(" ");
       // }
        for(int j=1;j<=i;j++){
          first=first*(i-j)/(j+1);//iC(j+1)
            printf("%d",first);
        }
        printf("\n");
    }
    
    return 0;
}
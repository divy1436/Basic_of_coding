#include<stdio.h>
int main(){
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   for(int i=2;i<=n-1;i++){
    if(n%i==0){
        a=1;
        break;
    }
   }   
   if(a==0) printf("the given number is prime\n");
   else printf("the given number is compostir\n");
    return 0;
}

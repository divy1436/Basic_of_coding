#include<stdio.h> 
int main(){
   int a;
   printf("enter the integer:");
   scanf("%d",&a);
   if(a%5==0 || a%3==0 && n%15!=0){
         printf("yes it is the number is divisble by 5 or 3");
    }
    else{
       printf("the number is  divisble by 15 ");
   }
   else{
    printf("the number is not divisble by 3 or 5");
   }
   return 0;
}
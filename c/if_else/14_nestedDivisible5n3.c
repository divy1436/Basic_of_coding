#include<stdio.h> 
int main(){
   int a;
   printf("enter the integer:");
   scanf("%d",a);
   if(a%5==0){
     if(a%3==0){
      printf("yes it is the number is divisble by 5 or 3");
       }
       else{
    printf("no its not");
    }
   }
   else{
    printf("no its not");
   }
   return 0;
}

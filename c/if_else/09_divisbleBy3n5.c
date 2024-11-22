#include<stdio.h> 
int main(){
   int a;
   printf("enter the integer:");
   scanf("%d",a);
   if(a%5==0 && a%3==0){
    printf("yes it is");
   }
   else{
    printf("no its not");
   }
   return 0;
}
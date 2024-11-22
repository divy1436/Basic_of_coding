#include<stdio.h>
int main(){
    int a;
    printf("enter a number of row:");
    scanf("%d",&a);
    
   for(int i=1;i<=a;i++){ 
        for(int i=1;i<=a;i++){
        printf("%d ",i);
   }
   printf("\n");
   }
        return 0;
}
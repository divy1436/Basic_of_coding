#include<stdio.h>
int main(){
    int a;
    printf("enter a number of row:");
    scanf("%d",&a);
    
   for(int i=1;i<=a;i++){ 
        for(int j=1;j<=a+1-i;j++){
        printf("%d ",j);
   }
   printf("\n");
   }
        return 0;
}
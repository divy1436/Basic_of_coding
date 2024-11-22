#include<stdio.h>
int main(){
    int n;
    printf("enter a number of row:");
    scanf("%d",&n);
    int b;
    printf("enter a number of column:");
    scanf("%d",&b);
    
   for(int i=1;i<=n;i++){ 
        for(int j=1;j<=b;j++){
            
            if(i == 1 || i == n || j == 1 || j == b)printf("*");
            else  printf(" ");
   }
   printf("\n");
   }
        return 0;
}
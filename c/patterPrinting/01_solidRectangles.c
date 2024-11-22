#include<stdio.h>
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
        // *******... upto n no of stars
   for(int i=1;i<=4;i++){ // outer loop -> no of lines
    for(int i=1;i<=a;i++){ // inner loop -> no of stars in each lines
        printf("* ");
   }
   printf("\n");
   }
        return 0;
}
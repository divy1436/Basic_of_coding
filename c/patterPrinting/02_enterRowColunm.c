#include<stdio.h>
int main(){
    int a;
    printf("enter a number of row:");
    scanf("%d",&a);
    int b;
    printf("enter a number of column:");
    scanf("%d",&b);
        // *******... upto n no of stars
   for(int i=1;i<=a;i++){ // outer loop -> no of lines
    for(int i=1;i<=b;i++){ // inner loop -> no of stars in each lines
        printf("* ");
   }
   printf("\n");
   }
        return 0;
}
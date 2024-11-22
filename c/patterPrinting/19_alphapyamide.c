#include<stdio.h>
int main(){
    int n;
    printf("enter a number of row:");
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
   for(int i=1;i<=n;i++){ 
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        int x=1;
        int d=x+64;
        char ch=(char)d;
        nsp=nsp-1;
        for(int j=1;j<=nst;j++){
        printf("%c",ch);
        d++;
        }
        nst = nst+2;
        printf("\n");
   }
   return 0;
}
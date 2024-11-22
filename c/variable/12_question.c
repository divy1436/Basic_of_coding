#include<stdio.h>
int main(){
    //finding remainders
    int a,b;
    printf("write the value of a and b");
    scanf("%d %d",&a,&b);
    int r= a/b;
    int d= a-b*r;
    //int r=a%b; (short cut for findiing remainder)
    printf("remainder %d",d);
    return 0;
}
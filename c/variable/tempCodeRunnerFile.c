#include<stdio.h>
int main(){
    int a,b;
    printf("write the value of a and b");
    scanf("%d %d",&a,&b);
    int c=a/b;
    int x=b*c;
    int r=b/x;
    printf("%d",r);
    return 0;
}
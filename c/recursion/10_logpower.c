#include<stdio.h>
int powerlog(int a,int b){
    if(b==1) return a;
    if(b%2==0){
        return powerlog(a,b/2)*powerlog(a,b/2);
    }
    else{
        return powerlog(a,b/2)*powerlog(a,b/2)*a;
    }
}

int main(){
    int a;
    printf("Enter a base :");
    scanf("%d",&a);
     int b;
    printf("Enter a power :");
    scanf("%d",&b);
    int p= powerlog(a,b);
    printf("%d is rasised to the power of %d is %d" ,a,b,p);
    return 0;
    
}
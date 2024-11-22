#include<stdio.h>
int main(){
    int cp;
    printf("enter the cost price: ");
    scanf("%d",&cp);
    int sp;
    printf("enter the sell price: ");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profite");
    }
    if(cp<sp){
        printf("loss");
    }
        if(sp==cp){
            printf("no loss no profit");
        }
    
    return 0;
    }
#include<stdio.h>
    int maze(int n, int m){
        int rightWays=0;
        int downWays=0;
        if(n==1 && m==1) return 1;
        if(n==1){ // Cannot go down
            rightWays += maze(n,m-1);
        }
        if(m==1){ //cannot go right
            downWays += maze(n-1,m);
        }    
        if(n>1 && m>1){
            rightWays += maze(n,m-1);
            downWays += maze(n-1,m);
        }
        int totalWays = rightWays+ downWays;
        return totalWays;
    }


int main(){
    int n;
    printf("Enter no of rows of the maze :");
    scanf("%d",&n);
     int b;
    printf("Enter no of columns of the maze :");
    scanf("%d",&b);
    int noOfways=maze(n,b);
    printf("%d",noOfways);
    return 0;
    
}
#include<stdio.h>
int main(){
    int marks[10] = {90,56,2,45,35,20,85,4,6,65};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
        printf("%d ", i);
        }
    }
    return 0;
}
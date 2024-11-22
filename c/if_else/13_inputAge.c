#include<stdio.h>
int main(){
    int ram,shyam,gopal;
    printf("enter the age of ram,shyam,gopal");
    scanf("%d %d %d",&ram,&shyam,&gopal);
    if(ram>shyam && ram>gopal ){
        printf(" Ram is younger");
    }
    if(shyam>ram && shyam>gopal){
    printf("shyam is younger");  
    }
    else{
        printf("gopal is younger");
    }
    return 0;
}
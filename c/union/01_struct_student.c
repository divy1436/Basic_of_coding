#include<stdio.h>
#include<string.h>
union student{
    int id;
    int marks;
    char fav_char;
    char name[34];

};
 int main(){
    union student s1;
    s1.id=1;
    s1.fav_char='d';
    strcpy(s1.name, "Divyanshu");
    s1.marks=56;

    printf("the is id %d\n",s1.id);
     printf("the is marks %d\n",s1.marks);
      printf("the name is %s\n",s1.name);
       printf("the is fav char %c\n",s1.fav_char);

 }
#include<stdio.h> 

struct student { // Define a structure to represent a student.
    int id; // Stores student ID.
    int marks; // Stores student marks.
    char fav_char; // Stores student favorite character.
    char name[34]; // Stores student name.
};
     struct student Divyanshu, srajan, anikte; // its now gobaliy access(if it is out side we can acess this from any where)
     void print(){
        printf("%s",Divyanshu.name);
     }
int main() {
    
    // struct student Divyanshu, srajan, anikte; if this is under main its local varbible it is only access by the fucnction under the main 

    // Assigning IDs to each student
    Divyanshu.id = 58; 
    srajan.id = 45;
    anikte.id = 78;

    // Assigning marks to each student
    Divyanshu.marks = 455;
    srajan.marks = 455;
    anikte.marks = 45;

    // Assigning favorite characters
    Divyanshu.fav_char = 'g';
    srajan.fav_char = 'g';
    anikte.fav_char = 'g';

    // Assigning names to students
    strcpy(Divyanshu.name, "Divy is student of the pce");
    print();
    // Printing the details of each student
    // printf("\nDivyanshu got %d marks\n", Divyanshu.marks);
    // printf("\nDivyanshu's name is: %s\n", Divyanshu.name);
    // printf("\nSrajan's ID: %d, Marks: %d, Favorite Character: %c", srajan.id, srajan.marks, srajan.fav_char);

    return 0; 
}


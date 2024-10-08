#include<stdio.h>

struct student
{
    char Name[40];
    int roll_num ;

};

int main(){

    printf("**** student details ****\n");

    struct student st1 ; 
    struct student *ptr = &st1; 

    printf("Enter name : \n");
    scanf("%s" , & ptr->Name);
    printf("Enter your roll number : \n");
    scanf("%d" , & ptr->roll_num);

    printf("Name : %s\n" , ptr->Name);
    printf("Roll number : %d\n" , ptr->roll_num);    

    return 0 ;
}

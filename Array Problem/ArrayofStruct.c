#include<stdio.h>

struct students {
    char name[50] ;
    int age ;
    float salary ; 
};

int main(){

    struct students student[3];

    for(int i = 0 ; i < 3 ; i++){
        printf("Enter you name : ");
        scanf("%s" , &student[i].name );
        printf("Enter your age : ");
        scanf("%d" , &student[i].age);
        printf("Enter you salary : ");
        scanf("%f" , &student[i].salary);
    }

    printf("******  Entered data  *********\n");

    for(int i = 0 ; i < 3 ; i++){
        printf("Enter you name : %s\n" , student[i].name);

        printf("Enter your age : %d\n" , student[i].age);

        printf("Enter you salary %0.2f: \n" , student[i].salary);

    }



    return 0 ;
}
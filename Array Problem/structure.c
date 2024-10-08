#include <stdio.h>

struct emp {
    char name[50]; 
    int id; 
    int age;
};

struct stu {
    char name[50]; 
    int roll; 
    int sex; 
    struct emp e; 
};

int main() {
    struct stu l1; 

    printf("Enter Name: ");
    scanf("%s", l1.name);
    printf("Enter Roll Number: ");
    scanf("%d", &l1.roll); 
    printf("Enter Sex (1 for male, 0 for female): ");
    scanf("%d", &l1.sex);


    printf("Enter Employee Details:\n");
    printf("Employee Name: ");
    scanf("%s", l1.e.name); 
    printf("Employee ID: ");
    scanf("%d", &l1.e.id); 
    printf("Employee Age: ");
    scanf("%d", &l1.e.age); 

    printf("****** Entered Details *******\n");

    printf("Student Name: %s\n", l1.name);
    printf("Roll Number: %d\n", l1.roll);
    printf("Sex: %d\n", l1.sex);
    printf("Employee Name: %s\n", l1.e.name);
    printf("Employee ID: %d\n", l1.e.id);
    printf("Employee Age: %d\n", l1.e.age);

    return 0;
}

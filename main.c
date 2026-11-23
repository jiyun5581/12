#include <stdio.h>
#include <string.h>


struct student{
    int number;
    char name[20];
    double grade;
};

int main(void){
    struct student s = { 202611, "Kim", 3.5 };
    s.number = 123456;
    strcpy(s.name, "Juyeop");
    s.grade = 4.2;
    printf("ID : %d\n", s.number);
    printf("name : %s\n", s.name);
    printf("grade : %f\n", s.grade);
    return 0;

}
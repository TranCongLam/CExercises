#include <stdio.h>
struct student {
    char * name;
    float math_grade;
    float english_grade;
    float literature_grade;
};

int main(){
    struct student student1;
    student1.name = "Nguyen van A";
    student1.math_grade = 8.5;
    student1.english_grade = 9;
    student1.literature_grade = 9.5;
    
    struct student student2;
    student2.name = "Tran Van B";
    student2.math_grade = 6;
    student2.english_grade = 7.9;
    student2.literature_grade = 7.2;

    struct student student3;
    student3.name ="Le Van C";
    student3.math_grade = 4.6;
    student3.english_grade = 5.6;
    student3.literature_grade = 7.9;

    printf(" Student 1:\n Name Student is %s\n Score of math is %f\n Score of english is %f\n Score of literature is %f\n", student1.name, student1.math_grade, student1.english_grade, student1.literature_grade);
    printf(" Student 2:\n Name Student is %s\n Score of math is %f\n Score of english is %f\n Score of literature is %f\n", student2.name, student2.math_grade, student2.english_grade, student2.literature_grade);
    printf(" Student 3:\n Name Student is %s\n Score of math is %f\n Score of english is %f\n Score of literature is %f\n", student3.name, student3.math_grade, student3.english_grade, student3.literature_grade);
    struct student class12A1[3] = {
        student1,
        student2,
        student3
    };
    for (int i = 0; i < 3; i++) {
        struct student hs = class12A1[i];
        printf(" Student %d Name is %s Score of math is %f Score of english is %f Score of literature is %f", i+1, hs.name, hs.math_grade, hs.english_grade, hs.literature_grade);
        printf("\n");
    }

    return 0;
}
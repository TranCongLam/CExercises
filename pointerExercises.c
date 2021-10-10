#include <stdio.h>
typedef struct {
    char * name;
    float math_grade;
    float english_grade;
    float literature_grade;
    float average_grade;
} student;

float average(student class12A1[3]){
    float average_classgrade = 0;
    for (int i = 0; i < 3; i++){
        student hs = class12A1[i];
        average_classgrade += hs.average_grade;
        
    }
    average_classgrade /= 3;
    
    return average_classgrade;
}

int main(){
    
    student student1;
    student1.name = "Nguyen van A";
    student1.math_grade = 8.5;
    student1.english_grade = 9;
    student1.literature_grade = 9.5;
    student1.average_grade = (student1.math_grade + student1.english_grade + student1.literature_grade) / 3 ;
    
    student student2;
    student2.name = "Tran Van B";
    student2.math_grade = 6.3;
    student2.english_grade = 7.9;
    student2.literature_grade = 7.2;
    student2.average_grade = (student2.math_grade + student2.english_grade + student2.literature_grade) / 3 ;

    student student3;
    student3.name ="Le Van C";
    student3.math_grade = 4.5;
    student3.english_grade = 5.6;
    student3.literature_grade = 7.9;
    student3.average_grade = (student3.math_grade + student3.english_grade + student3.literature_grade) / 3 ;
    

    printf(" Student 1:\n Name Student is %s\n Score of math is %f\n Score of english is %f\n Score of literature is %f\n", student1.name, student1.math_grade, student1.english_grade, student1.literature_grade);
    printf(" Student 2:\n Name Student is %s\n Score of math is %f\n Score of english is %f\n Score of literature is %f\n", student2.name, student2.math_grade, student2.english_grade, student2.literature_grade);
    printf(" Student 3:\n Name Student is %s\n Score of math is %f\n Score of english is %f\n Score of literature is %f\n", student3.name, student3.math_grade, student3.english_grade, student3.literature_grade);
    student class12A1[3] = {
        student1,
        student2,
        student3
    };
    float average_classgrade = 0;
    for (int i = 0; i < 3; i++) {
        student hs = class12A1[i];
        printf("%f\n", average_classgrade);
        average_classgrade += hs.average_grade;
        printf(" Student %d\n Name is %s\n Score of math is %f\n Score of english is %f\n Score of literature is %f\n Score average is %f\n", i+1, hs.name, hs.math_grade, hs.english_grade, hs.literature_grade, hs.average_grade);
        printf("\n");
    }
    printf("Diem trung binh cua ca lop la %f\n", average_classgrade / 3);
    
    float result = average(class12A1);
    printf("Diem trung binh ca lop la %f\n", result);
    
    return 0;
}


 
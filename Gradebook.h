#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <string>
#include "Grade.h"
class Gradebook{
protected: 
    void addGrade(int stud_id,int course_id,std::string assignment, int value);
    Grade* grades[100];  // Fixed-size array to store up to 100 grades
    int gradeCount;      // 

};
#endif
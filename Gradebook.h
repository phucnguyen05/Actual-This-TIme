#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <string>
#include "Grade.h"
class Gradebook:public Grade{
protected: 
    void addGrade(int stud_id,int course_id,std::string assignment, int value);
    Grade* grades=new Grade[100];  // Fixed-size array to store up to 100 grades
    int gradeCount=0;      // 

};
#endif
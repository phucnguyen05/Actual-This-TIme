#include "Gradebook.h"

void Gradebook::addGrade(int stud_id,int course_id,std::string assignment, int value){
    if (gradeCount < 100){
        grades[gradeCount].student_id=stud_id;
        grades[gradeCount].course_id=course_id;
        grades[gradeCount].assignment=assignment;
        grades[gradeCount].value=value;
    }
    gradeCount++;
}

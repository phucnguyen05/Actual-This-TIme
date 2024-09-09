#include "University.h"

void University::addCourse(int id, std::string name){
    if (course_count < 100) {
        courses[course_count].id = id;
        courses[course_count].name = name;
        course_count++;
    } 
}

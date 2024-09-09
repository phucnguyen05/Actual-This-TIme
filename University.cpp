#include "University.h"

void University::addCourse(int id, std::string name){
    if (course_count < 100) {
        // Create a new Course object with the given id and name
        courses[course_count].id=id_;
        courses[course_count].name=string_;
        // Increment the course count
        course_count++;
    } 
}

#ifndef COURSE_H
#define COURSE_H
#include "Person.h"
#include <string>
class Course {
protected:
    std::string name;
    Person** persons;
    int id; 
    void addPerson(Person* student_name);
};
#endif
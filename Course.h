#ifndef COURSE_H
#define COURSE_H
#include "Person.h"
#include <string>
class Course {
public:
    std::string name;
    Person** persons;
    int id; 
    void addPerson(Person* student_name);
    int currentSize=0;
};
#endif
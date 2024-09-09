#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "Person.h"
#include "Grade.h"
using namespace std;

class Student:public Person{
    protected:
        int id;
        Grade* student_grades;
};
#endif
#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <iostream>
#include "Course.h"

class University:public Course{
protected: 
  std::string name;
  std::string location;
  Course* courses=new Course[100];
  int course_count=0;
public:
  void addCourse(int id_, std::string name_);
};

#endif
 
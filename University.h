#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <iostream>
#include "Course.h"

class University {

      private: 
        std::string name;
        std::string location;
        Course* courses;
      public:
         void addCourse(int id, std::string name);
};

#endif
 
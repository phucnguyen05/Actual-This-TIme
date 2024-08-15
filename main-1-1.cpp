#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main(){
    Person* person_array=createPersonArray(5);
    return 1;
}
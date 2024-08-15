#include <iostream>
#include "Person.h"

Person* createPersonArray(int n){
    Person* people_array=new Person[n];
    for (int i=0;i<n;i++){
        people_array[i].name="John Doe";
        people_array[i].age=0;

    }
    return people_array;
}

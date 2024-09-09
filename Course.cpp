#include "Course.h"

void Course::addPerson(Person* student_name){
     if (currentSize == 0) {
        // If no initial size, start with a small size
        persons = new Person*[1];
    } else {
        // Increase the size of the array
        Person** newPersons = new Person*[currentSize + 1];
        for (int i = 0; i < currentSize; ++i) {
            newPersons[i] = persons[i];
        }
        delete[] persons;
        persons = newPersons;
    }
     // Add the new person
    persons[currentSize] = student_name;
    ++currentSize;
}

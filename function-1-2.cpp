#include "Person.h"
#include <string>

PersonList createPersonList(int n){
    PersonList peoplesz;
    peoplesz.numPeople=n;
    peoplesz.people=new Person[n];
    for (int i=0;i<n;i++){
        peoplesz.people[i].name="John Doe";
        peoplesz.people[i].age=0;

    }
    return peoplesz;
}
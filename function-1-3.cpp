#include "Person.h"
#include <string>

PersonList deepCopyPersonList(PersonList pl){
    PersonList deep_copy;
    deep_copy.numPeople=pl.numPeople;
    deep_copy.people=new Person[pl.numPeople]
    for (int i=0;i<pl.numPeople;i++){
        deep_copy.people[i].name=pl.people[i].name;
        deep_copy.people[i].age=pl.people[i].age;

    }
    return deep_copy;
}
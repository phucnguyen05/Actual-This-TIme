#include "Person.h"
#include <string>
extern PersonList shallowCopyPersonList(PersonList pl);

int main(){
    PersonList test1,test2;

    test2=shallowCopyPersonList(test1);
    return 1;
}
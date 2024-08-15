#include "Person.h"
#include <string>
extern PersonList deepCopyPersonList(PersonList pl);

int main(){
    PersonList test1,test2;

    test2=deepCopyPersonList(test1);
    return 1;
}
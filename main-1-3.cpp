#include "Person.h"
#include <string>
extern PersonList deepCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n);

int main(){
    PersonList test1,test2;
    test1=createPersonList(3);
    test2=deepCopyPersonList(test1);
    return 1;
}
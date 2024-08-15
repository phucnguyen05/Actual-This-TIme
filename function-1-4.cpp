#include "Person.h"
#include <string>

PersonList shallowCopyPersonList(PersonList pl){
    PersonList shallow_copy;
    shallow_copy=pl;
    return shallow_copy;
}
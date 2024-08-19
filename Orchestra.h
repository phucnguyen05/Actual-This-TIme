#ifndef ORCHESTRA_H
#define ORCHESTRA_H
#include "Musician.h"
#include <string>

class Orchestra{
private:
    int max_size,current_size;
    Musician* musician_list;
public:
    Orchestra();
    Orchestra(int size);
    int get_current_number_of_members(); 
    bool has_instrument(std::string instrument);
    Musician* get_members();   
    bool add_musician(Musician new_musician);
    ~Orchestra();
};
#endif 
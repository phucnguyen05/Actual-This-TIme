#include "Orchestra.h"
#include "Musician.h"
#include <iostream> 

Orchestra::Orchestra(){
    max_size=0;
    musician_list=nullptr;
}

Orchestra::Orchestra(int size){
    max_size=size;
    musician_list= new Musician[size];
}

int Orchestra::get_current_number_of_members(){
    return current_size;
}

bool Orchestra::has_instrument(std::string instrument){
    for (int i=0;i<current_size;i++){
        if(musician_list[i].get_instrument()==instrument){
            return true;
        }
    }
    return false;
}


Musician* Orchestra::get_members(){
    return musician_list;
}

bool Orchestra::add_musician(Musician new_musician){
    if (current_size<max_size){
        musician_list[current_size]=new_musician;
        current_size++;
        return true;
    }  
}

Orchestra::~Orchestra(){
    delete[] musician_list;
}


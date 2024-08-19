#include "Musician.h"

Musician::Musician(){
    instrument_name="";
    years_of_experience=0;
}
Musician::Musician(std::string instrument, int experience){
    instrument_name=instrument;
    years_of_experience=experience;
}

std::string Musician::get_instrument(){
    return instrument_name;
}

int Musician::get_experience(){
    return years_of_experience;
}

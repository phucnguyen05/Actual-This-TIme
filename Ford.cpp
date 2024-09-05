#include "Ford.h"

void Ford::refuel(int litres){
    if(litresOfFuel+litres<=60){
        litresOfFuel=litresOfFuel+litres;
    }

}

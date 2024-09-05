#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

class House:public Appliance, public TV, public Fridge{
public:
    House();
    House(int numAppliances);
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();
protected:
    Appliance** appliances;
    int numAppliances;
    int current_num=0;
};
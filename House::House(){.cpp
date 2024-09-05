House::House(){
}

House::House(int numAppliances){
    appliances= new Appliance[numAppliances];
    this->numAppliances=numAppliances;
}



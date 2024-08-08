extern int arrayMin(double* array_pointer,int size);
#include <iostream>

int main(){
    double double_array[]={1.2,4.9,13.7};
    double minimum=arrayMin(double_array,3);
    std::cout<<minimum<<std::endl;
    return 1;
}
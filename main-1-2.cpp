#include <iostream>
extern void modifyArray(double* array, int size, double value);

int main(){
    double double_array[]={1.25,12.5,12.74};
    modifyArray(double_array,3,5);
    std::cout<<double_array[0]<<std::endl;
    return 1;
}
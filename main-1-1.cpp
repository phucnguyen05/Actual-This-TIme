extern int arrayMin(double* array_pointer,int size);
#include <iostream>

int main(){
    double double_array[]={125,326,12,854,125};
    int minimum=arrayMin(double_array,5);
    std::cout<<minimum<<std::endl;
    return 1;
}
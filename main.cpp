#include "workshop.h"
#include <iostream>

int main(){
    //part 2
    double number=3.14;
    double* pointer1=&number;
    changeValue(pointer1);
    std::cout<<number<<std::endl;

    //part 3 
    double double_array[]={1.21,2.42,25.6,126.7,34.236};
    printArray(double_array,5);

    //part 4
    double maximum=arrayMax(double_array,5);
    std::cout<<maximum<<std::endl;

    //part 7
    double* array_pointer=dynamicArray(5,3.14);
    for(int i=0;i<5;i++){
        std::cout<<array_pointer[i]<<" ";
    }
    std::cout<<"\n";

    return 1;
}
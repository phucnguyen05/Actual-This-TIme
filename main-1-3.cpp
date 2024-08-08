#include <iostream>
extern double* duplicateArray(double* array, int size);

int main(){
    double array[]={1.21,3.14,1.31};
    double* new_pointer=duplicateArray(array,3);
    return 1;
}
#include <iostream>
extern int binary_to_int(int binary_digits[],int number_of_digits);

int main(){
    int binary_array[]={1,0,1,1,1};
    int result=binary_to_int(binary_array,5);
    std::cout<<result<<std::endl;
    return 1;
}
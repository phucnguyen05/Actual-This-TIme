#include <iostream>
#include <string>
#include <cmath>

int bi_to_ten(int binary){
    std::string binary_string=std::to_string(binary);
    int total=0, index=0;
    for (int i=binary_string.length()-1;i>=0;i--){
        char current_number_c=binary_string[index]; 
        int current_number_i=current_number_c-'0';
        total=total+pow(2,i)*current_number_i;
        index++;
    }
    return total;
}

int main(){
    int base_ten=bi_to_ten(111);
    std::cout<<base_ten<<std::endl;
    return 0;
}
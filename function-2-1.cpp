#include <iostream>
#include <cmath>
#include <string>  

 void print_binary_str(std::string decimal_number){
    int base_10=stoi(decimal_number);
    int bit_needed=std::log2(base_10)+1;
    std::string binary_array(bit_needed,'0');
    int remainder=base_10;
    int index=0;
    for (int i=bit_needed-1;i>=0;i--){
        if(remainder-pow(2,i)>=0){
            binary_array[index]='1';
            remainder=remainder-std::pow(2,i);
            index++;
        }else{
            binary_array[index]='0';
            index++;
        }
    }
    int binary=std::stoi(binary_array);
    std::cout<<binary<<std::endl;
}
#include <iostream>
#include <cmath>
#include <string>  

int conversion_10_to_2(int base_10){
    int bit_needed=std::log2(base_10)+1;
    std::string binary_array(bit_needed,'0');
    int remainder=base_10;
    int index=0;
    for (int i=bit_needed-1;i>=0;i--){
        if(remainder-pow(2,i)>=0){
            binary_array[index]='1';
            remainder=remainder-pow(2,i);
            index++;
        }else{
            binary_array[index]='0';
            index++;
        }
    }
    int binary=std::stoi(binary_array);
    return binary;
}

int main(){
    int user_num=0;
    std::cin>>user_num;
    int result=conversion_10_to_2(user_num);
    std::cout<<result<<std::endl;
    return 0;
}
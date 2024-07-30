#include <iostream>
#include <string>

int left_shift(int number){
    std::string number_converted = std::to_string(number);
    std::string left_shifted(number_converted.length()+1,'0');
    for (int i=number_converted.length()-1;i>=0;i--){
        left_shifted[i]=number_converted[i];
    }
    int result=stoi(left_shifted);
    return result;
}


int main(){
    int result=left_shift(11);
    std::cout<<"Left shift of 1010: "<<result<<std::endl;
    return 0;
}
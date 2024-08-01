#include <iostream>
#include <string>
extern void print_binary_str(std::string decimal_number);

int main(){
    std::string number="123";
    print_binary_str(number);
    return 1;
}
#include <iostream>

extern int* readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main(){
    int* first_array=readNumbers();
    int* second_array=readNumbers();

    bool result =equalsArray(first_array,second_array,10);
    std::cout<<result<<std::endl;
    return 1;
}
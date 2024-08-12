#include <iostream>

extern int* readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length);

int main(){
    int* first_array=readNumbers();
    int* reversed = reverseArray(first_array,10);

    bool result =equalsArray(first_array,reversed,10);
    std::cout<<result<<std::endl;
    return 1;
}
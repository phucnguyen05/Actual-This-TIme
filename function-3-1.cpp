#include <iostream>
int* readNumbers(){
    int* number_array= new int[10];
    for(int i=0;i<10;i++){
        std::cin>>number_array[i];
    }
    return number_array;
}

bool equalsArray(int *numbers1,int *numbers2,int length){
    if (length<1){
        return false;
    }
    for (int i=0;i<length;i++){
        if (numbers1[i]!=numbers2[i]){
            return false;
        }
    }
    return true;
}

#include <iostream>

void changeValue(double* pointing_to){
    *pointing_to=42;
}

void printArray(double* pointer_to_array,int length){
    for(int i=0;i<length;i++){
        std::cout<<pointer_to_array[i]<<" ";
    }
    std::cout<<"\n";
}

double arrayMax(double* pointing_to, int length){
    double max_so_far=pointing_to[0];
    for (int i=1;i<length;i++){
        if(pointing_to[i]>max_so_far){
            max_so_far=pointing_to[i];
        }
    }
    return max_so_far; 
}

double* dynamicArray(int n,double m){
    double* double_array = new double[n]();
    for(int i=0;i<n;i++){
        double_array[i]=m;    
    }
    return double_array;
}

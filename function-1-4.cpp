#include <iostream>

void print_scaled(int array[3][3],int scale){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            array[i][j]= array[i][j]*scale;
        }
    } 
    //printing now
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout<<array[i][j]<<" ";
        }
        std::cout<<"\n";
    }   
}
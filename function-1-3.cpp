#include <iostream>
void count_digits(int array[4][4]){
    int arr[10]={};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[array[i][j]]=arr[array[i][j]]+1;
        }
    }
    std::cout<<"0:"<<arr[0]<<";1:"<<arr[1]<<";2:"<<";2:"<<arr[2]<<";3:"<<arr[3]<<";4:"<<arr[4]<<";5:"<<arr[5]<<";6:"<<arr[6]<<";7:"<<arr[7]<<";8:"<<arr[8]<<";9:"<<arr[9]<<";"<<std::endl;

}
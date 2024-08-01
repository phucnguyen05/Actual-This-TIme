#include <iostream>

extern int sum_diagonal(int array[4][4]);

int main(){
    int matrix[4][4];
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            matrix[i][j]=i+j;
        }
    }
    int total = sum_diagonal(matrix);
    std::cout<<total<<std::endl;
    return 0;
}
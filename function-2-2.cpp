#include <cmath>

int binary_to_int(int binary_digits[],int number_of_digits){
    int total=0,index=0;
    for (int i=number_of_digits-1;i>=0;i--){
        total=total+(pow(2,i)*binary_digits[index]);
        index++;
    }
    return total;
}
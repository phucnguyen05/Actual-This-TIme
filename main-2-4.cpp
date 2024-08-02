#include <iostream>

extern int array_min(int integers[],int length);
extern int array_max(int integers[],int length);
extern int sum_min_max(int integers[],int length);

int main(){
    int numbers[]={1,2,3,4,5};
    int result=sum_min_max(numbers,5);
    std::cout<<result<<std::endl;
    return 1;
}


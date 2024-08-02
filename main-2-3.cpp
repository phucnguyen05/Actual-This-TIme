#include <iostream>
extern int sum_if_palindrome(int integers[],int length);
extern bool is_palindrome(int integers[],int length);
extern int sum_array_elements(int integers[],int length);

int main(){
    int integers[]={1,2,0,0,2,1};
    int sum=sum_if_palindrome(integers,6);
    std::cout<<sum<<std::endl;
    return 1;
}
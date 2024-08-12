 #include <iostream> 
extern  int* readNumbers();
extern void printNumbers(int *numbers,int length);

int main(){
    int* number_array=readNumbers();
    printNumbers(number_array,10);
    return 1; 
}
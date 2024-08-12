 #include <iostream> 
extern  int* readNumbers();
extern void printNumbers(int *numbers,int length);
extern void hexDigits(int *numbers,int length);

int main(){
    int* number_array=readNumbers();
    hexDigits(number_array,10);
    delete[] number_array;
    return 1; 
}
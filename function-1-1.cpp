int arrayMin(double* array_pointer,int size){
    int minimum_so_far=array_pointer[0];
    for (int i=1;i<size;i++){
        if (array_pointer[i]<minimum_so_far){
            minimum_so_far=array_pointer[i];
        }
    }
    return minimum_so_far;
}
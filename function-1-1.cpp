double arrayMin(double* array,int size){
    double minimum_so_far=array[0];
    for (int i=1;i<size;i++){
        if (array[i]<minimum_so_far){
            minimum_so_far=array[i];
        }
    }
    return minimum_so_far;
}
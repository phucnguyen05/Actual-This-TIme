int sum_diagonal(int array[4][4]){
    int total=0;
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            if (i==j){
            total+=array[i][j];
            }
        }
    }
    return total;
}

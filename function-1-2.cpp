int is_identity(int array[10][10]){
    for(int i=0;i<10;i++){
         for(int j=0;j<10;i++){
            if (i==j){
                if(array[i][j]!=1){
                    return 0;
                    break;
                }
            }else{
                if(array[i][j]!=0){
                    return 0;
                    break;
                }

            }
        }
    }
    return 1; 
}
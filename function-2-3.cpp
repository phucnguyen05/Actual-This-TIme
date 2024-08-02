bool is_palindrome(int integers[],int length){
    int first_index=0,last_index=length-1;
    for(int i=0;i<=length/2;i++){
        if(integers[first_index]!=integers[last_index]){
            return false;
        }
    }
    return true;
}

int sum_array_elements(int integers[],int length){
    int sum=0;
    for(int i=0;i<length;i++){
        sum+=integers[i];
    }
    return sum;
}

int sum_if_palindrome(int integers[],int length){
    if (length<=0){
        return -1;
    }
    bool result=is_palindrome(integers,length);
    if (result==true){
        return sum_array_elements(integers,length);
    }else{
        return 2; 
    }
}


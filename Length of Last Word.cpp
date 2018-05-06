int Solution::lengthOfLastWord(const string A) {

    int len =0;
    int lenA=A.length();
    int i=lenA-1;
    while(i>=0){
        if(A[i]==' '){
            i--;
        }else{
            break;
        }
    }
    for(;i>=0;i--){
        if(A[i]==' '){
            break;
        }
        len++;
    }
    return len;
}

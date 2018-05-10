int Solution::atoi(const string A) {
    int lena=A.length();
    long x=0;
    int flag=0;
    if(A[0]=='-'){
        flag=1;
    }

    int i=0;
    if(flag){
        i=1;
    }
    if(A[0]=='+'){
        i++;
    }
    while(i<lena&&(A[i]>='0'&&A[i]<='9')){
        x=x*10+(A[i]-'0');
        i++;
        if(x>INT_MAX){
            if(flag){
                return INT_MIN;
            }else{
                return INT_MAX;
            }
        }
    }
    if(flag){
        return -1*x;
    }else{
        return x;
    }
}

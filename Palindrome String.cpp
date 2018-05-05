int Solution::isPalindrome(string A) {
    string palin = "";

    int Alen = A.length();

    for(int i=0;i<Alen;i++){
        if((A[i]>='a'&&A[i]<='z')||(A[i]>='A'&&A[i]<='Z')||(A[i]>='0'&&A[i]<='9')){
            if(A[i]>='a'&&A[i]<='z'){
                palin += A[i]-32;
            }else{
                palin += A[i];
            }
        }
    }
    int len = palin.length();
    int flag = 0;
    for(int i=0;i<len/2;i++){
        if(palin[i]!=palin[len-i-1]){
            flag=1;
            break;
        }
    }
    if(flag){
        return 0;
    }else{
        return 1;
    }

}

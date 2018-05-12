string Solution::addBinary(string A, string B) {
    int lena=A.size();
    int lenb=B.size();
    string res="";
    int i=lena-1;
    int j=lenb-1;
    int rem=0;
    while(i>=0||j>=0){
        int dig=rem;
        if(i>=0){
            dig+=(A[i]-'0');
            i--;
        }
        if(j>=0){
            dig+=(B[j]-'0');
            j--;
        }
        rem=dig/2;
        dig=dig%2;
        // if(dig==2){
        //     dig=0;
        //     rem=1;
        // }else if(dig==3){
        //     dig=1;
        //     rem=1;
        // }else{
        //     rem = 0;
        // }
        res=(char)(dig+'0')+res;
    }
    if(rem!=0){
        res=(char)(rem+'0')+res;
    }
    return res;
}

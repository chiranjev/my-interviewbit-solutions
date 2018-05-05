int computelpsarray(string s){
    int len = s.length();
    int lps[len];
    lps[0]=0;
    int j=0,i=1;

    while(i<len){
        if(s[i]==s[j]){
            j++;
            lps[i]=j;
            i++;
        }else{
            if(j!=0){
                j=lps[j-1];
            }else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps[len-1];
}

int Solution::solve(string A) {
    string B = A;
    int len = A.length();
    reverse(A.begin(),A.end());
    A = B + "$" +A;

    int lps =computelpsarray(A);

    return len - lps;

}

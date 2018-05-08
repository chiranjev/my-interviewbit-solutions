int Solution::numDecodings(string A) {

    int lena=A.size();

    int dp[lena+1];
    dp[0]=1;
    dp[1]=1;

    if(A[0]=='0'){
        return 0;
    }

    for(int i=1;i<lena;i++){
        int num=A[i-1]-48;
        num=num*10+(A[i]-48);
        if(num%10==0&&num>20){
            return 0;
        }
        if(A[i]=='0'){
            dp[i+1]=dp[i-1];
        }else if(A[i-1]=='0'){
            dp[i+1]=dp[i];
        }else if(num<=26){
            dp[i+1]=dp[i]+dp[i-1];
        }else{
            dp[i+1]=dp[i];
        }
    }

    return dp[lena];

}

int Solution::minDistance(string A, string B) {

    int lena=A.length();
    int lenb=B.length();
    int dp[lena+1][lenb+1];

    for(int i=0;i<=lena;i++){
        for(int j=0;j<=lenb;j++){
            if(i==0){
                dp[i][j]=j;
            }else if(j==0){
                dp[i][j]=i;
            }else{
                if(A[i-1]==B[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }else{
                    dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
                }
            }
        }
    }
    return dp[lena][lenb];

}

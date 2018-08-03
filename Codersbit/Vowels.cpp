int Solution::solve(int A) {
    int mod=1000000007;
    long long dp[A+1][5];

    memset(dp,0,sizeof(dp));

    for(int i=0;i<5;i++){
        dp[1][i]=1;
    }
    for(int i=2;i<=A;i++){
        dp[i][0]=(dp[i-1][1]+dp[i-1][2])%mod;
        dp[i][1]=(dp[i-1][2])%mod;
        dp[i][2]=(dp[i-1][0]+dp[i-1][1]+dp[i-1][3]+dp[i-1][4])%mod;
        dp[i][3]=(dp[i-1][0]+dp[i-1][4])%mod;
        dp[i][4]=(dp[i-1][1]+dp[i-1][3])%mod;
    }
    int ans=0;
    for(int i=0;i<5;i++){
        ans=(ans+dp[A][i])%mod;
    }
    return ans;
}

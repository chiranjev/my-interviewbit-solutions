int Solution::minimumTotal(vector<vector<int> > &A) {

    int len = A.size();

    int dp[len][len];
    dp[0][0]=A[0][0];
    for(int i=1;i<len;i++){
        for(int j=0;j<=i;j++){
            if(j==0){
                dp[i][j]=dp[i-1][j]+A[i][j];
            }else if(j==i){
                dp[i][j]=dp[i-1][j-1]+A[i][j];
            }else{
                dp[i][j]=min(dp[i-1][j],dp[i-1][j-1])+A[i][j];
            }
        }
    }
    int ans=INT_MAX;
    for(int i=0;i<len;i++){
        ans=min(ans,dp[len-1][i]);
    }
    return ans;


}
// O(N^2) extra space

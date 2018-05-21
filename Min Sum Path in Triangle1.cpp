int Solution::minimumTotal(vector<vector<int> > &A) {

    int len = A.size();

    int dp[len];
    dp[0]=A[0][0];
    for(int i=1;i<len;i++){
        for(int j=i;j>=0;j--){
            if(j==i){
                dp[j]=dp[j-1]+A[i][j];
            }else if(j==0){
                dp[j]=dp[j]+A[i][j];
            }else{
                dp[j]=min(dp[j],dp[j-1])+A[i][j];
            }
        }
    }
    int ans=INT_MAX;
    for(int i=0;i<len;i++){
        ans=min(ans,dp[i]);
    }
    return ans;


}
// O(N) extra space

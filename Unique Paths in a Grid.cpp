int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    int row=A.size();
    int col=A[0].size();

    int dp[row][col];
    memset(dp,0,sizeof(dp));

    for(int i=0;i<row;i++){
        if(A[i][0]==1){
            break;
        }else{
            dp[i][0]=1;
        }
    }
    for(int i=0;i<col;i++){
        if(A[0][i]==1){
            break;
        }else{
            dp[0][i]=1;
        }
    }
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if(A[i][j]==1){
                dp[i][j]=0;
            }else{
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
    }
    return dp[row-1][col-1];
}

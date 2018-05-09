// https://www.programcreek.com/2014/03/leetcode-dungeon-game-java/
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int Solution::calculateMinimumHP(vector<vector<int> > &A) {

    int row=A.size();
    int col=A[0].size();

    // dp[i][j] is the minimum health value before he enters (i,j)
    int dp[row][col];
    dp[row-1][col-1]=max(1,1-A[row-1][col-1]);

    for(int i=row-2;i>=0;i--){
        dp[i][col-1]=max(dp[i+1][col-1]-A[i][col-1],1);
    }
    for(int i=col-2;i>=0;i--){
        dp[row-1][i]=max(dp[row-1][i+1]-A[row-1][i],1);
    }

    for(int i=row-2;i>=0;i--){
        for(int j=col-2;j>=0;j--){
            int d=max(dp[i+1][j]-A[i][j],1);
            int r=max(dp[i][j+1]-A[i][j],1);
            dp[i][j]=min(r,d);
        }
    }

    return dp[0][0];


}

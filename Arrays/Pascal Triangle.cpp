vector<vector<int> > Solution::solve(int A) {

    vector<int> v;
    vector<vector<int> > ans(A,v);

    for(int i=0;i<A;i++){
        ans[i].push_back(1);
    }
    for(int i=1;i<A;i++){
        for(int j=1;j<=i;j++){
            if(j==i){
            ans[i].push_back(ans[i-1][j-1]);
            }else{
             ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
            }
        }
    }
    return ans;
}

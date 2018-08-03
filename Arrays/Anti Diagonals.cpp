vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<int> v;
    int n = A.size();
    vector<vector<int> > ans(n*2-1);


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i+j].push_back(A[i][j]);
        }
    }
    return ans;
}

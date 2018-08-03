vector<vector<int> > Solution::generateMatrix(int A) {
    int k = 1;
    int m = 0;
    int n = A-1;
    int o = 0;
    int p = A-1;
    vector<int> v(A);
    vector<vector<int>> ans(A,v);

    while(m<=n&&o<=p){
        for(int i=o;i<=p;i++){
            ans[m][i] = k++;
        }
        m++;
        for(int i=m;i<=n;i++){
            ans[i][p]=k++;
        }
        p--;
        for(int i=p;i>=o;i--){
            ans[n][i]=k++;
        }
        n--;
        for(int i=n;i>=m;i--){
            ans[i][o]=k++;
        }
        o++;
    }
    return ans;
}

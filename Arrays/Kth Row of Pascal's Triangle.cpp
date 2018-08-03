int combination(int n,int r){
    int maxlen = max(r,n-r);
    long long ans =1;
    for(int i=maxlen+1;i<=n;i++){
        ans*=i;
    }
    for(int i=1;i<=n-maxlen;i++){
        ans/=i;
    }
    return (int)ans;
}
vector<int> Solution::getRow(int A) {
    vector<int> v;
    for(int i=0;i<=A;i++){
        v.push_back(combination(A,i));
    }
    return v;
}

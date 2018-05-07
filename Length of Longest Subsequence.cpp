int Solution::longestSubsequenceLength(const vector<int> &A) {
//https://www.geeksforgeeks.org/dynamic-programming-set-15-longest-bitonic-subsequence/
    int lenA = A.size();

    int lis[lenA],lds[lenA];
    for(int i=0;i<lenA;i++){
        lis[i]=1;
        lds[i]=1;
    }
    for(int i=1;i<lenA;i++){
        for(int j=i-1;j>=0;j--){
            if(A[i]>A[j]&&lis[i]<lis[j]+1){
                lis[i]=lis[j]+1;
            }
        }
    }
    for(int i=lenA-2;i>=0;i--){
        for(int j=i+1;j<lenA;j++){
            if(A[i]>A[j]&&lds[i]<lds[j]+1){
                lds[i]=lds[j]+1;
            }
        }
    }
    // for(int i=0;i<lenA;i++){
    //     cout << lis[i] << " ";
    // }
    // cout << endl;
    // for(int i=0;i<lenA;i++){
    //     cout << lds[i] << " ";
    // }
    int ans=0;
    for(int i=0;i<lenA;i++){
        ans=max(ans,lis[i]+lds[i]-1);
    }

    return ans;
}

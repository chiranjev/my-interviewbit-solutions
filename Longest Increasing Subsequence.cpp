int Solution::lis(const vector<int> &A) {

    int lena=A.size();

    int lis[lena];
    for(int i=0;i<lena;i++){
        lis[i]=1;
    }
    int ans=1;
    for(int i=1;i<lena;i++){
        int j=i-1;
        while(j>=0){
            if(A[i]>A[j]&&lis[i]<lis[j]+1){
                lis[i]=lis[j]+1;
            }
            ans=max(lis[i],ans);
            j--;
        }
    }

    return ans;

}

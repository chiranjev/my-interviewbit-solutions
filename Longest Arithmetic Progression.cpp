int Solution::solve(const vector<int> &A) {

    int lena=A.size();
    int ans=1;
    for(int i=0;i<lena;i++){
        for(int j=i+1;j<lena;j++){
            int count=2;
            ans=max(ans,count);
            int last=A[j];
            int diff=A[j]-A[i];
            for(int k=j+1;k<lena;k++){
                if(A[k]-last==diff){
                    count++;
                    ans=max(ans,count);
                    last=A[k];
                }
            }
        }
    }
    return ans;
}

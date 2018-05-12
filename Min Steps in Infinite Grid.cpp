int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int len=A.size();

    int ans=0;

    for(int i=1;i<len;i++){
        ans+=max(abs(B[i]-B[i-1]),abs(A[i]-A[i-1]));
    }
    return ans;
}

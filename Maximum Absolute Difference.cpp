// https://www.geeksforgeeks.org/maximum-absolute-difference-value-index-sums/
int Solution::maxArr(vector<int> &A) {
    int len=A.size();
    int ans=0;
    int maxi=INT_MIN,maxj=INT_MIN,mini=INT_MAX,minj=INT_MAX;
    for(int i=0;i<len;i++){
        maxi=max(maxi,A[i]+(i+1));
        maxj=max(maxj,A[i]-(i+1));
        mini=min(mini,A[i]+(i+1));
        minj=min(minj,A[i]-(i+1));
    }
    ans=max(maxi-mini,maxj-minj);
    return ans;
}

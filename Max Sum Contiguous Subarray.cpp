int Solution::maxSubArray(const vector<int> &A) {

    int len=A.size();
    int curr_sum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<len;i++){
        curr_sum+=A[i];
        max_sum=max(curr_sum,max_sum);
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    return max_sum;
}

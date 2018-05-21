// https://www.youtube.com/watch?v=Taq95cvRom8
int Solution::maxProfit(const vector<int> &A) {
    int len = A.size();

    int profit=0;
    for(int i=1;i<len;i++){
        if(A[i-1]<A[i]){
            profit+=A[i]-A[i-1];
        }
    }

    return profit;
}

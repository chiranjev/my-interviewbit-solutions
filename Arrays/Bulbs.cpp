int Solution::bulbs(vector<int> &A) {
    int len = A.size();
    int count=0;
    for(int i=0;i<len;i++){
        if(A[i]==0&&count%2==0){
            count++;
        }else if(A[i]==1&&count%2==1){
            count++;
        }
    }

    return count;
}

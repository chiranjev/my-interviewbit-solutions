int Solution::solve(vector<int> &A) {

    int len = A.size();

    sort(A.begin(),A.end());

    for(int i=0;i<len-1;i++){
        if(A[i]==A[i+1]){
            continue;
        }else if(A[i]==len-i-1){
            return 1;
        }
    }
    if(A[len-1]==0){
        return 1;
    }
    return -1;
}

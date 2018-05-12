vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> ans;

    int len = A.size();
    int sum=A[len-1]+1;
    int carry=0;
    if(sum>=10){
        carry=sum/10;
        sum=sum%10;
    }
    int start;
    A[len-1]=sum;
    ans.push_back(A[len-1]);
    for(start=0;start<len;start++){
        if(A[start]!=0){
            break;
        }
    }
    for(int i=len-2;i>=start;i--){
        if(A[i]+carry>=10){
            carry=(A[i]+carry)/10;
            A[i]=(A[i]+carry)%10;
        }else{
            A[i]+=carry;
            carry=0;
        }
        ans.push_back(A[i]);
    }
    if(carry!=0){
        ans.push_back(carry);
    }
    reverse(ans.begin(),ans.end());

    return ans;
}

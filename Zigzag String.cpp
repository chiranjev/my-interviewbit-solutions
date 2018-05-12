// https://www.geeksforgeeks.org/print-concatenation-of-zig-zag-string-form-in-n-rows/
string Solution::convert(string A, int B) {
    if(B==1){
        return A;
    }
    int len = A.size();
    string arr[B];
    int row=0;
    int dir = 1; // for down and 0 for up
    for(int i=0;i<len;i++){
        arr[row]+=A[i];

        if(row==B-1){
            dir=0;
        }else if(row==0){
            dir=1;
        }

        if(dir==1){
            row++;
        }else{
            row--;
        }
    }
    string ans="";
    for(int i=0;i<B;i++){
        ans.append(arr[i]);
    }
    return ans;
}

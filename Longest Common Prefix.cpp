#include<bits/stdc++.h>
string Solution::longestCommonPrefix(vector<string> &A) {
    int lenPrefix = 0;
    int lenA = A.size();
    int flag=0;
    int minSize=A[0].size();
    for(int i=0;i<A.size();i++){
        if(minSize>A[i].size()){
            minSize=A[i].size();
        }
    }
    for(int i=0;i<minSize;i++){
        for(int j=0;j<lenA;j++){
            if(A[j][i]!=A[0][i]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
        if(flag==0){
            lenPrefix++;
        }
    }
    return A[0].substr(0,lenPrefix);
}

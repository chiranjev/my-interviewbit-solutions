// https://leetcode.com/problems/multiply-strings/discuss/17605/Easiest-JAVA-Solution-with-Graph-Explanation
// https://www.geeksforgeeks.org/multiply-large-numbers-represented-as-strings/
string Solution::multiply(string A, string B) {

    int lena=A.size();
    int lenb=B.size();

    int ans[lena+lenb];
    memset(ans,0,sizeof(ans));

    for(int i=lena-1;i>=0;i--){
        for(int j=lenb-1;j>=0;j--){
            int pos1=i+j;
            int pos2=i+j+1;
            int mul=(A[i]-'0')*(B[j]-'0');
            mul+=ans[pos2];
            ans[pos1]+=mul/10;
            ans[pos2]=mul%10;
        }
    }
    string mulans="";
    for(int i=0;i<lena+lenb;i++){
        if(mulans.size()==0&&ans[i]==0){
            continue;
        }else{
            mulans=mulans+(char)(ans[i]+'0');
        }
    }
    if(mulans.size()==0){
        return "0";
    }else{
        return mulans;
    }

}

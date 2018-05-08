void Solution::reverseWords(string &A) {

    int len = A.length();
    int i=len-1;
    string ans;
    while(i>=0){
        string temp="";
        while(i>=0&&A[i]!=' '){
            temp=A[i]+temp;
            i--;
        }
        i--;
        ans+=temp;
        ans+=" ";
    }
    ans.erase(ans.begin()+ans.length()-1);
    A=ans;
}

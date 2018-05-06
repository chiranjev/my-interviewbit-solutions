string Solution::countAndSay(int A) {
    string Ans = "1";
    int count;
    for(int i=1;i<A;i++){
        string temp="";
        for(int j=0;j<Ans.length();j+=count){
            count=1;
            int k=j+1;
            while(k<Ans.length()&&Ans[j]==Ans[k]){
                count++;
                k++;
            }
            temp+=(char)(count+48);
            temp+=Ans[j];
        }
        Ans=temp;
    }
    return Ans;

}

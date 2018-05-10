int Solution::power(string A) {

    int len=A.size();
    string ans="";
    int rem=0;
    int i=0;
    if(len==1&&A[0]=='1'){
        return 0;
    }
    while(len>=1&&A!="1"){
        if(len==1&&A[0]=='2'){
            return 1;
        }
        while(i<len){
            if(i==0&&A[0]=='1'){
                int temp=10+(A[1]-'0');
                ans+=(char)(temp/2+'0');
                rem=temp%2;
                i+=2;
            }else{
                int temp=rem*10+(A[i]-'0');
                ans+=(char)(temp/2+'0');
                rem=temp%2;
                i++;
            }
        }
        if(rem==1){
            return 0;
        }else{
            len=ans.size();
            A=ans;
            ans="";
            i=0;
        }
    }
    return 0;
}

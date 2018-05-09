int Solution::isNumber(const string A) {

    int len=A.size();
    int flag=0;
    int s=0;
    int e=len-1;
    while(A[s]==' '){
        s++;
    }
    if(s==e+1){
        return 0;
    }
    while(A[e]==' '){
        e--;
    }
    for(int i=s;i<=e;i++){
        if(A[i]=='.'&&flag==1){
            return 0;
        }else if(i>s&&A[i]=='-'&&A[i-1]!='e'){
            return 0;
        }else if((A[i]=='e')&&(i==e||i==s)){
                return 0;
        }else if(A[i]=='.'&&i==e){
            return 0;
        }else if(A[i]=='e'&&A[i-1]=='.'){
            return 0;
        }else if(A[i]=='-'||A[i]=='e'||(A[i]>='0'&&A[i]<='9')||A[i]=='.'){
            if(A[i]=='e'){
                flag=1;
            }
        }else{
            return 0;
        }
    }
    return 1;

}

void computelpsarray(string p,int lps[]){
    int lenp=p.length();
    int j=0;
    int i=1;
    lps[0]=0;
    while(i<lenp){
        if(p[i]==p[j]){
            j++;
            lps[i]=j;
            i++;
        }else{
            if(j!=0){
                j=lps[j-1];
            }else{
                lps[i]=0;
                i++;
            }
        }
    }

}

int kmp(string s,string p){
    int lens=s.length();
    int lenp=p.length();

    int lps[lenp];
    computelpsarray(p,lps);

    int i=0,j=0;

    while(i<lens){
        if(s[i]==p[j]){
            i++;
            j++;
        }
        if(j==lenp){
            return i-j;
        }else if(i<lens && p[j]!=s[i]){
            if(j!=0){
                j=lps[j-1];
            }else{
                i++;
            }
        }
    }
    return -1;
}

int Solution::strStr(const string A, const string B) {
    int lena=A.length();
    int lenb=B.length();
    if(lena==0||lenb==0||(lena<lenb)){
        return -1;
    }
    return kmp(A,B);
}

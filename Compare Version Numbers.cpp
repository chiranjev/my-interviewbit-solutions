// https://www.geeksforgeeks.org/compare-version-numbers-large-inputs-allowed/
int compare(string a,string b){
    int lena=a.size();
    int lenb=b.size();
    if(lena>lenb){

        return 1;
    }else if(lenb>lena){
        return -1;
    }
    int i=0;
    while(i<lena){
        if(a[i]>b[i]){
            return 1;
        }else if(b[i]>a[i]){
            return -1;
        }else{
            i++;
        }
    }
    return 0;
}

int Solution::compareVersion(string A, string B) {
    int lena=A.size();
    int lenb=B.size();
    int res=0;
    int i=0,j=0;
    string substra="";
    string substrb="";
    while(i<lena||j<lenb){
        while(i<lena&&A[i]==' '){
            i++;
        }
        while(j<lenb&&B[j]==' '){
            j++;
        }
        while(i<lena&&((A[i]=='0')||A[i]=='.')){
            i++;
        }
        while(j<lenb&&((B[j]=='0')||B[j]=='.')){
            j++;
        }
        while((i<lena)&&(A[i]!=' ')&&(A[i]!='.')){
            substra+=A[i];
            i++;
        }
        while((j<lenb)&&(B[j]!=' ')&&(B[j]!='.')){
            substrb+=B[j];
            j++;
        }
        res = compare(substra,substrb);
        if(res==1){
            return 1;
        }else if(res==-1){
            return -1;
        }
        substrb="";
        substra="";
    }
    return 0;


}

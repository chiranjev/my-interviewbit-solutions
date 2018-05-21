// https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/
vector<int> Solution::repeatedNumber(const vector<int> &A) {

    int len=A.size();

    int xor1=0;

    for(int i=0;i<len;i++){
        xor1^=A[i];
    }
    for(int i=1;i<=len;i++){
        xor1^=i;
    }

    int rmbit=xor1&~(xor1-1);

    int x=0,y=0;

    for(int i=0;i<len;i++){
        if(rmbit&A[i]){
            x^=A[i];
        }else{
            y^=A[i];
        }
    }
    for(int i=1;i<=len;i++){
        if(rmbit&i){
            x^=i;
        }else{
            y^=i;
        }
    }
    int r,m;
    for(int i=0;i<len;i++){
        if(x==A[i]){
            r=x;
            m=y;
            break;
        }
        if(y==A[i]){
            r=y;
            m=x;
            break;
        }
    }
    vector<int> v(2);
    v[0]=r;
    v[1]=m;
    return v;

}

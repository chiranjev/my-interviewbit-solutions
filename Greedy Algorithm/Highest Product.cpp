int Solution::maxp3(vector<int> &A) {

    int len = A.size();
    int maxa=INT_MIN;
    int maxb=INT_MIN;
    int maxc=INT_MIN;
    int mina=INT_MAX;
    int minb=INT_MAX;
    for(int i=0;i<len;i++){
        if(A[i]>maxa){
            maxc=maxb;
            maxb=maxa;
            maxa=A[i];
        }else if(A[i]>maxb){
            maxc=maxb;
            maxb=A[i];
        }else if(A[i]>maxc){
            maxc=A[i];
        }
        if(A[i]<mina){
            minb=mina;
            mina=A[i];
        }else if(A[i]<minb){
            minb=A[i];
        }
    }
    return max(maxa*maxb*maxc,maxa*mina*minb);

}

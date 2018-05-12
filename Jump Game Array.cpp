// https://www.youtube.com/watch?v=cETfFsSTGJI (O(N^2))
// https://www.youtube.com/watch?v=vBdo7wtwlXs (O(N))
// https://www.geeksforgeeks.org/minimum-number-jumps-reach-endset-2on-solution/ (O(N))
int Solution::canJump(vector<int> &A) {

    int len=A.size();

    int numofjumps[len];
    int actualjump[len];
    numofjumps[0]=0;
    actualjump[0]=-1;

    for(int i=1;i<len;i++){
        numofjumps[i]=INT_MAX-1;
        actualjump[i]=-1;
        for(int j=0;j<i;j++){
            if(A[j]+j>=i){
                if(numofjumps[i]>numofjumps[j]+1){
                    numofjumps[i]=numofjumps[j]+1;
                    actualjump[i]=j;
                }
            }
        }
    }

    // for(int i=0;i<len;i++){
    //     cout << numofjumps[i] << " " ;
    // }
    // cout << endl;
    // for(int i=0;i<len;i++){
    //     cout << actualjump[i] << " " ;
    // }
    // cout << endl;


    if(numofjumps[len-1]==INT_MAX-1){
        return 0;
    }else{
        return 1;
    }

}

// O(N^2)

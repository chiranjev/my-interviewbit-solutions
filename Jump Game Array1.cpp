// https://www.youtube.com/watch?v=cETfFsSTGJI (O(N^2))
// https://www.youtube.com/watch?v=vBdo7wtwlXs (O(N))
// https://www.geeksforgeeks.org/minimum-number-jumps-reach-endset-2on-solution/ (O(N))
int Solution::canJump(vector<int> &A) {

    int len=A.size();

    if(len<=1){
        return 1;
    }
    if(A[0]==0){
        return 0;
    }
    int maxreach = A[0]; // stores all time the maximal reachable index in the array.
    int steps = A[0]; // stores the amount of steps we can still take
    int jumps = 1; // stores the amount of jumps necessary to reach that maximal reachable position.

    for(int i=1;i<len;i++){
        if(i==len-1){
            return 1;
        }
        maxreach=max(maxreach,i+A[i]);
        steps--;
        if(steps==0){
            jumps++;
            if(i>=maxreach){
                return 0;
            }
            steps = maxreach-i;
        }
    }
    return 0;

}

// O(N)

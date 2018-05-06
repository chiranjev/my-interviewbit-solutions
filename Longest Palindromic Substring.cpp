string Solution::longestPalindrome(string A) {
//https://www.geeksforgeeks.org/longest-palindromic-substring-set-2/
    int len=A.length();
    int maxLen=1;
    int start=0;
    for(int i=0;i<len-1;i++){
        int low=i;
        int high=i+1;
        while(low>=0&&high<len&&A[low]==A[high]){
            if(maxLen<high-low+1){
                maxLen=high-low+1;
                start=low;
            }
            low--;
            high++;
        }
        low=i-1;
        high=i+1;

        while(low>=0&&high<len&&A[low]==A[high]){
            if(maxLen<high-low+1){
                maxLen=high-low+1;
                start=low;
            }
            low--;
            high++;
        }

    }

    string ans = "";
    for(int i=start;i<start+maxLen;i++){
        ans+=A[i];
    }
    return ans;
}

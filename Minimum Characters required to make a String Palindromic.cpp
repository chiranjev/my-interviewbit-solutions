int isPalindrome(string s){
    for(int i=0,j=s.length()-1;i<j;i++,j--){
        if(s[i]!=s[j]){
            return 0;
        }
    }
    return 1;
}

int Solution::solve(string A) {
    int lenA = A.length();
    int count = 0;

    for(int i=lenA;i>0;i--){
        if(isPalindrome(A)){
            return count;
        }else{
            count++;
            A.erase(A.begin()+A.length()-1);
        }
    }


    return count;
}

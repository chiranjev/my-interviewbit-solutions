int Solution::isPalindrome(int A) {

    if(A<0){
        return 0;
    }
    int rev=0;
    int temp=A;
    while(temp){
        int dig=temp%10;
        // check for overflow here
        if (rev>(INT_MAX/10)||(rev==(INT_MAX/10)&&dig>(INT_MAX%10))){
            return 0;
        }
        rev=rev*10+dig;
        temp/=10;

    }
    if(rev==A){
        return 1;
    }else{
        return 0;
    }

}
